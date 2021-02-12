# ------------------------------------------------------------------------------------------------#
#  Model
# ------------------------------------------------------------------------------------------------#

set(MODEL_PUB_HEADERS
    ${LibCommuni_INCLUDE_DIR}/IrcModel//ircbuffer.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffermodel.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircchannel.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircmodel.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircuser.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircusermodel.h
)

set(MODEL_PRIV_HEADERS
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffer_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircbuffermodel_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircchannel_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircuser_p.h
    ${LibCommuni_INCLUDE_DIR}/IrcModel/ircusermodel_p.h
)

set(MODEL_SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/ircbuffer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircbuffermodel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircchannel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircmodel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircuser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ircusermodel.cpp
)

add_library(Communi_Model SHARED ${MODEL_PUB_HEADERS} ${MODEL_PRIV_HEADERS} ${MODEL_SOURCE_FILES})

target_link_libraries(Communi_Model PUBLIC Qt5::Core Qt5::Network)
target_include_directories(Communi_Model PUBLIC "${LibCommuni_INCLUDE_DIR}/IrcModel/" "${LibCommuni_INCLUDE_DIR}/IrcCore/")
target_compile_definitions(Communi_Model PUBLIC IRC_STATIC IRC_NAMESPACE=Communi)