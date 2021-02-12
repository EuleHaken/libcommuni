# ------------------------------------------------------------------------------------------------#
#  Model
# ------------------------------------------------------------------------------------------------#

project(Model)

set(PUB_HEADERS
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffer.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffermodel.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircchannel.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircmodel.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircuser.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircusermodel.h
)

set(PRIV_HEADERS
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffer_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffermodel_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircchannel_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircuser_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircusermodel_p.h
)

set(SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/ircbuffer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircbuffermodel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircchannel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircmodel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircuser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircusermodel.cpp
)

add_library(${PROJECT_NAME} SHARED ${PUB_HEADERS} ${PRIV_HEADERS} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PUBLIC Qt5::Core Qt5::Network)
target_include_directories(${PROJECT_NAME} PUBLIC "${LibCommuni_INCLUDE_DIR}/IrcModel/" "${LibCommuni_INCLUDE_DIR}/IrcCore/")
target_compile_definitions(${PROJECT_NAME} PUBLIC IRC_STATIC IRC_NAMESPACE=Communi)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${PUB_HEADERS}")

install(TARGETS ${PROJECT_NAME}
        PUBLIC_HEADER 
        LIBRARY
        ARCHIVE
)