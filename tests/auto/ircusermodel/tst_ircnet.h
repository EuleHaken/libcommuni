/*
 * Copyright (C) 2008-2013 The Communi Project
 *
 * This test is free, and not covered by the LGPL license. There is no
 * restriction applied to their modification, redistribution, using and so on.
 * You can study them, modify them, use them in your own program - either
 * completely or partially.
 */

#ifndef TST_IRCNET_H
#define TST_IRCNET_H

static const char* ircnet_welcome =
        ":irc.ifi.uio.no 020 * :Please wait while we process your connection.\r\n"
        ":irc.ifi.uio.no 001 communi :Welcome to the Internet Relay Network communi!~communi@hidd.en\r\n"
        ":irc.ifi.uio.no 002 communi :Your host is irc.ifi.uio.no, running version 2.11.2p3\r\n"
        ":irc.ifi.uio.no 003 communi :This server was created Wed Aug 8 2012 at 10:28:47 CEST\r\n"
        ":irc.ifi.uio.no 004 communi irc.ifi.uio.no 2.11.2p3 aoOirw abeiIklmnoOpqrRstv\r\n"
        ":irc.ifi.uio.no 005 communi RFC2812 PREFIX=(ov)@+ CHANTYPES=#&!+ MODES=3 CHANLIMIT=#&!+:21 NICKLEN=15 TOPICLEN=255 KICKLEN=255 MAXLIST=beIR:64 CHANNELLEN=50 IDCHAN=!:5 CHANMODES=beIR,k,l,imnpstaqr :are supported by this server\r\n"
        ":irc.ifi.uio.no 005 communi PENALTY FNC EXCEPTS=e INVEX=I CASEMAPPING=ascii NETWORK=IRCNet :are supported by this server\r\n"
        ":irc.ifi.uio.no 042 communi 578IAAESX :your unique ID\r\n"
        ":irc.ifi.uio.no 251 communi :There are 55235 users and 5 services on 27 servers\r\n"
        ":irc.ifi.uio.no 252 communi 95 :operators online\r\n"
        ":irc.ifi.uio.no 254 communi 30892 :channels formed\r\n"
        ":irc.ifi.uio.no 255 communi :I have 447 users, 0 services and 4 servers\r\n"
        ":irc.ifi.uio.no 265 communi 447 456 :Current local users 447, max 456\r\n"
        ":irc.ifi.uio.no 266 communi 55235 58824 :Current global users 55235, max 58824\r\n"
        ":irc.ifi.uio.no 375 communi :- irc.ifi.uio.no Message of the Day -\r\n"
        ":irc.ifi.uio.no 376 communi :End of MOTD command.\r\n";

static const char* ircnet_join =
        ":communi!~communi@hidd.en JOIN :#uptimed\r\n"
        ":irc.ifi.uio.no 332 communi #uptimed :UPTIME CONTEST - STARTS WITH 600 VOICES / The winner gets a 1 year SHELL\r\n"
        ":irc.ifi.uio.no 333 communi #uptimed t0r-!t0r@mi.servirebbe.per.fare.sesso.un.howto.jp 1380194318\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :communi +_box +Ste` +`ViRuS` +sensej +ip +\\x00 +Dos +Plato +sonik +[daro] +056DABT1Q @Voicer +Elcid +NICK +ComeAsYouAre +nightmare +AboutAGirl +once +Arwen +vizion @artico +OnceW3reWarrior +NT2000 +Coolio +babka +dziadek +OnceWereWarrior +kaban +nabak +uytrew +705AAFHDM +705AAFHDO +705AAFHDN +ggefew +233EAGIRG +adsfds +[jp] +233DADVTX +233DADVTW +vaginakkk +szok +datanetek +deeee +italiano +knbb +em +robo +dupeczka +233DADWSZ +mofaya +fogiel +[nsa]\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+vagina +evil_ +vaginallo +why +evil` +inci +yhw +zazaza +ewe +bandoz +zeus +[animanera] +{artic} @Uptimed +sisiako +italianos +elite +polishpower +nsa` +`artic` +RedDevil +varna +s +rudy +draven +lupo +ijnnk +quest[2] +desapir +itsab +r0d +keep +An0nym0uz +_sparco +nsa- +KaPPa +devilkickers +wannie +PaulAnunda +TuOmaS- +Ainame +TeSsIer +MarkrIckeR +Markvillam +LasteS +JaMeS_ +CriStiaNo +IvanaCosta +brunodp +HackYou +Ducentesimo +Created +Ciwarshak\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+BroLy +BriatoRe +tasya +cpanel +liana +shoutcast +humantourch +myznc +kopisusu +ainah +IRC +knb +ipv4 +zguba +{ +rudi +idur +ls_212 +[goku] +xman +josip +mushroom +ajo +Patty +alien^ +ReMoNDiNi +marselo +NiTr0 +iOrOxxo +DartagnaN +TheCure +FurisO +MetroNotte +ToRSoLo +register +init-zero +Pilszcz +DjCaro +wamper +ToRQUaTo +Alison +Wenni^_^ +Hambi +MzMaNdY +Howie^^ +Chiwai +EkinCheng +Jenny^_^ @abuser` +die @Mgla +rcu +|jp| +|be| +egg +suka +ircoholik\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+|de| @ruciu +japanase +zncbot +latitanz +kafir +sparco +invisible +elk +jazz +esprit +strange +rex +grasshopper +miracle +outlaw @t0r- +veronica +artic| @[m] +ToRDo +ToRRoNe +MusSi +ToRBiDo +gozmit +ToReRo +ToRReNTe +Mediterraneo +Sugar +unregistered +bohjan +biskut +xdos +unix +cheap +android +birc +edit +Robocop +Neon +Temp +Apofis +Seth +Sokar +Iron +Control +Kiler +mrozek +widzewiak +klesk +Dj +Rcnet +mybsd +lis +[d] +resu` +ussus_ +ksychy +sp +kln\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+psk +Kulf0n +daro +darecki +pan_ban +Anonymouz +atos +MarRosso +CommenDa +miglia +Spike +Sc0rpion +Krotone +ViboValentia +Arcaverde +AlcaTRaz +Adriatico +MescaliNa +PiPo_ +RogeS +sm0k +kakashi +naintails +smuga +howkey +aven[gers] +[neo] +[dill] +Aptajm +marcin +founder +roger +feedback +M-k +Madmax +Piramida +Hator +Loginek +Lill +Polibuda +Zeus` +bouncer +msdos +gurl +kongsi +mamak +scid +mylinux +sock +nana +ibm +samba +k-pop +gyna +k-chat +mail\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+chat +yatie +ircap +Ho-Nam +mynet +rindunet +qip +eggies +db +fakap +loco +mircpro +mircbot +mynic +bladez +hackintosh +egghelp +kampung +cisco +girl +skepticals +nickname +Uncle-B +bohsia +mircx @Grypsio +kaktej +Asia +HelpAR +VaneSSaBeLL +AcHIni +DjuNaBarnEs +HydRA +WilHElm- +BrIanCHon +LiLi +Br0doWski +Apus +BoUdin0 +ERebpAR +RetIculum +TucANA +CAsIk +CANes +PuppIs +BeNaZech +BeRnaRDus +Lupus +IzrAileviC +UlAIn +AdaMI +Bartels +AGliNK +Helon +UlpAR\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+BemELmaNS +DelphINus +AbBati +FoRNAx +BenKvicH +Ulseth +PIctoR +BeJJini +BroOWn +Br00k +AffanNU +Achenbach +BelloTTo +AbrHHam +CeNtAuRus +Agutte +AlbrECht +AnGeLico +Ar13S +TAuRus +BeReNIces +AzARfAR +AquIlA +Br0uwEr +BreYtenbaCH +CAsImAR +CAssIopeIA +ColumbA +CRux +EuGen +GeoFFrY +HiPPolyter +HoRologIum +LAceRtA +LeoMINoR +NIsAIn +NIsseth +NoRmA +PaVl0viC +ScoRpIus +SeRpeNs +ShuRImAR +artic +TitoAguiAri +ZIRpAR +TuRfAR +VAnIkAIn +VolANs +NIspAR\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+CAsImAl +ThiErry +INdus +Cetus +PeTerFraNcio +GRus +MadDox +PIscIs +VulpeculA +CeCily +TRIANgulum +CApRIcoRNus +FraNtz +TuRIen +AdeMollo +BrIgnOni +AgReSti +AustRAle +BoTTinI +BouVIer +BrenTANA +BriNdiSi +CAelum +DoRAdo +ErNIeBarnEs +Helseth +JeNNiferBart +leBrocQUy +Lepus +LyNx +OctANs +OphIuchus +PeNeTriL +PIsces +PyxIs +roKkmAn +SAgIttA +TelescopIum +CRAteR +PeRseus +ShuRpAR +CAsseth +BeLLini +ChAmAeleoN +MIcRoscopIum +Ad0lphE +BoReAlIs +ARA_ +CARINA\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+AquARIus_ +BartoLomeo +ShuRon +t0r__ +YaAcovAgam +Betty- +HydRus +ANDRoMeD2 +Mercurio +HeRcules_ +ORIoN- +Br00ker +Cepheus +276XAAAPU +PegAsus_ +CAspAR +BoUchE +MoNoceRos +URsAMAjoR +CAsIl +AivaZZovskKy +ERIdANus +BoUdeWijNS +LyR4 +ERebseth +ShuRseth +AleChiNskY +LIbRA +Leo +AceRbi +AuRIgA +BeNNo +Bootes_ +BriSSaud +CIRcINus +DRAco +SAgIttAR2us +WaSHingt0n +JUliUs- +TuRIk +HansBellmEs +PAvo +SculptoR +AddNet +GemINI +ANtlIA +ShuRkAn +BoUcheR +Br0wn\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+URsAMINoR +VelA +CoRvus_ +BoWerANO +AustRINA +Agn0l +KaziMIerZ +PhoeNIx- +Scutum +SebAStieN +VIRgo_ +CANceR_ +CygNus_ +ZIRseth +t0r_ +ERebon +Equuleus +BouLAngeR +CAson +SextANs +JBelliNi +BourdiDIchoN +AzARAth +DiLDoSauRo +PumPinks +Callisto +Cosenza +Meschino +Portos +IoRobot +Eclipse +HighLander +T0XiC +Popoff +PaLLa +Indiano +MDma +Eastie +BleacH +PoSiX +Slash_ +InUtero +FormaGGino +riggiu +tirrenico +papera +MaXMerilio +MalandriNo +ToRTiGLia\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+ToRToRa +BeLGo +NetBeans +NeverMind +BlackSp1rit +Ionico +Anfetamina +t0r +ladyshrew +ToRoNTo +AsTRo` +ToRCeTTo +EnSi +ToRNaDo +ToRReTTa +MaGReBiNo +ToRBoSo +ToRSiDa +ToRCia +ToRCiCoLLo +Wokie +RuMeNiNo +ToRTiNo +TheOne +NOP +oVaCoD +KiFFa +CLeMeNTiNo +ToRaCe +EviLDoG +PoPkiss +NeverDown +EleCTrO +CaM3LS_ +Hulk +StocaZZico +YoUbEgGaReD +Ocean +aLBaNiN0 +CaNeSeCCo +AlwaysBack +Crimson +OuRwEeRiCiN +Shorty +BeeDeePee +Punker +ToRaLBa +BeSTio +BaBy_BluE\r\n"
        ":irc.ifi.uio.no 353 communi = #uptimed :+TeSTiCoLo^ +BieBeron +Prosexionist +svansen +artic^\r\n"
        ":irc.ifi.uio.no 366 communi #uptimed :End of NAMES list.\r\n";

static const char* ircnet_names =
        "communi _box Ste` `ViRuS` sensej ip \\x00 Dos Plato sonik [daro] 056DABT1Q Voicer Elcid NICK ComeAsYouAre nightmare AboutAGirl once Arwen vizion artico OnceW3reWarrior NT2000 Coolio babka dziadek OnceWereWarrior kaban nabak uytrew 705AAFHDM 705AAFHDO 705AAFHDN ggefew 233EAGIRG adsfds [jp] 233DADVTX 233DADVTW vaginakkk szok datanetek deeee italiano knbb em robo dupeczka 233DADWSZ mofaya fogiel [nsa] "
        "vagina evil_ vaginallo why evil` inci yhw zazaza ewe bandoz zeus [animanera] {artic} Uptimed sisiako italianos elite polishpower nsa` `artic` RedDevil varna s rudy draven lupo ijnnk quest[2] desapir itsab r0d keep An0nym0uz _sparco nsa- KaPPa devilkickers wannie PaulAnunda TuOmaS- Ainame TeSsIer MarkrIckeR Markvillam LasteS JaMeS_ CriStiaNo IvanaCosta brunodp HackYou Ducentesimo Created Ciwarshak "
        "BroLy BriatoRe tasya cpanel liana shoutcast humantourch myznc kopisusu ainah IRC knb ipv4 zguba { rudi idur ls_212 [goku] xman josip mushroom ajo Patty alien^ ReMoNDiNi marselo NiTr0 iOrOxxo DartagnaN TheCure FurisO MetroNotte ToRSoLo register init-zero Pilszcz DjCaro wamper ToRQUaTo Alison Wenni^_^ Hambi MzMaNdY Howie^^ Chiwai EkinCheng Jenny^_^ abuser` die Mgla rcu |jp| |be| egg suka ircoholik "
        "|de| ruciu japanase zncbot latitanz kafir sparco invisible elk jazz esprit strange rex grasshopper miracle outlaw t0r- veronica artic| [m] ToRDo ToRRoNe MusSi ToRBiDo gozmit ToReRo ToRReNTe Mediterraneo Sugar unregistered bohjan biskut xdos unix cheap android birc edit Robocop Neon Temp Apofis Seth Sokar Iron Control Kiler mrozek widzewiak klesk Dj Rcnet mybsd lis [d] resu` ussus_ ksychy sp kln "
        "psk Kulf0n daro darecki pan_ban Anonymouz atos MarRosso CommenDa miglia Spike Sc0rpion Krotone ViboValentia Arcaverde AlcaTRaz Adriatico MescaliNa PiPo_ RogeS sm0k kakashi naintails smuga howkey aven[gers] [neo] [dill] Aptajm marcin founder roger feedback M-k Madmax Piramida Hator Loginek Lill Polibuda Zeus` bouncer msdos gurl kongsi mamak scid mylinux sock nana ibm samba k-pop gyna k-chat mail "
        "chat yatie ircap Ho-Nam mynet rindunet qip eggies db fakap loco mircpro mircbot mynic bladez hackintosh egghelp kampung cisco girl skepticals nickname Uncle-B bohsia mircx Grypsio kaktej Asia HelpAR VaneSSaBeLL AcHIni DjuNaBarnEs HydRA WilHElm- BrIanCHon LiLi Br0doWski Apus BoUdin0 ERebpAR RetIculum TucANA CAsIk CANes PuppIs BeNaZech BeRnaRDus Lupus IzrAileviC UlAIn AdaMI Bartels AGliNK Helon UlpAR "
        "BemELmaNS DelphINus AbBati FoRNAx BenKvicH Ulseth PIctoR BeJJini BroOWn Br00k AffanNU Achenbach BelloTTo AbrHHam CeNtAuRus Agutte AlbrECht AnGeLico Ar13S TAuRus BeReNIces AzARfAR AquIlA Br0uwEr BreYtenbaCH CAsImAR CAssIopeIA ColumbA CRux EuGen GeoFFrY HiPPolyter HoRologIum LAceRtA LeoMINoR NIsAIn NIsseth NoRmA PaVl0viC ScoRpIus SeRpeNs ShuRImAR artic TitoAguiAri ZIRpAR TuRfAR VAnIkAIn VolANs NIspAR "
        "CAsImAl ThiErry INdus Cetus PeTerFraNcio GRus MadDox PIscIs VulpeculA CeCily TRIANgulum CApRIcoRNus FraNtz TuRIen AdeMollo BrIgnOni AgReSti AustRAle BoTTinI BouVIer BrenTANA BriNdiSi CAelum DoRAdo ErNIeBarnEs Helseth JeNNiferBart leBrocQUy Lepus LyNx OctANs OphIuchus PeNeTriL PIsces PyxIs roKkmAn SAgIttA TelescopIum CRAteR PeRseus ShuRpAR CAsseth BeLLini ChAmAeleoN MIcRoscopIum Ad0lphE BoReAlIs ARA_ CARINA "
        "AquARIus_ BartoLomeo ShuRon t0r__ YaAcovAgam Betty- HydRus ANDRoMeD2 Mercurio HeRcules_ ORIoN- Br00ker Cepheus 276XAAAPU PegAsus_ CAspAR BoUchE MoNoceRos URsAMAjoR CAsIl AivaZZovskKy ERIdANus BoUdeWijNS LyR4 ERebseth ShuRseth AleChiNskY LIbRA Leo AceRbi AuRIgA BeNNo Bootes_ BriSSaud CIRcINus DRAco SAgIttAR2us WaSHingt0n JUliUs- TuRIk HansBellmEs PAvo SculptoR AddNet GemINI ANtlIA ShuRkAn BoUcheR Br0wn "
        "URsAMINoR VelA CoRvus_ BoWerANO AustRINA Agn0l KaziMIerZ PhoeNIx- Scutum SebAStieN VIRgo_ CANceR_ CygNus_ ZIRseth t0r_ ERebon Equuleus BouLAngeR CAson SextANs JBelliNi BourdiDIchoN AzARAth DiLDoSauRo PumPinks Callisto Cosenza Meschino Portos IoRobot Eclipse HighLander T0XiC Popoff PaLLa Indiano MDma Eastie BleacH PoSiX Slash_ InUtero FormaGGino riggiu tirrenico papera MaXMerilio MalandriNo ToRTiGLia "
        "ToRToRa BeLGo NetBeans NeverMind BlackSp1rit Ionico Anfetamina t0r ladyshrew ToRoNTo AsTRo` ToRCeTTo EnSi ToRNaDo ToRReTTa MaGReBiNo ToRBoSo ToRSiDa ToRCia ToRCiCoLLo Wokie RuMeNiNo ToRTiNo TheOne NOP oVaCoD KiFFa CLeMeNTiNo ToRaCe EviLDoG PoPkiss NeverDown EleCTrO CaM3LS_ Hulk StocaZZico YoUbEgGaReD Ocean aLBaNiN0 CaNeSeCCo AlwaysBack Crimson OuRwEeRiCiN Shorty BeeDeePee Punker ToRaLBa BeSTio BaBy_BluE "
        "TeSTiCoLo^ BieBeron Prosexionist svansen artic^";

static const char* ircnet_admins = "";
static const char* ircnet_ops = "Voicer artico Uptimed abuser` Mgla ruciu t0r- [m] Grypsio";
static const char* ircnet_halfops = "";

static const char* ircnet_voices =
        "_box Ste` `ViRuS` sensej ip \\x00 Dos Plato sonik [daro] 056DABT1Q Elcid NICK ComeAsYouAre nightmare AboutAGirl once Arwen vizion OnceW3reWarrior NT2000 Coolio babka dziadek OnceWereWarrior kaban nabak uytrew 705AAFHDM 705AAFHDO 705AAFHDN ggefew 233EAGIRG adsfds [jp] 233DADVTX 233DADVTW vaginakkk szok datanetek deeee italiano knbb em robo dupeczka 233DADWSZ mofaya fogiel [nsa] "
        "vagina evil_ vaginallo why evil` inci yhw zazaza ewe bandoz zeus [animanera] {artic} sisiako italianos elite polishpower nsa` `artic` RedDevil varna s rudy draven lupo ijnnk quest[2] desapir itsab r0d keep An0nym0uz _sparco nsa- KaPPa devilkickers wannie PaulAnunda TuOmaS- Ainame TeSsIer MarkrIckeR Markvillam LasteS JaMeS_ CriStiaNo IvanaCosta brunodp HackYou Ducentesimo Created Ciwarshak "
        "BroLy BriatoRe tasya cpanel liana shoutcast humantourch myznc kopisusu ainah IRC knb ipv4 zguba { rudi idur ls_212 [goku] xman josip mushroom ajo Patty alien^ ReMoNDiNi marselo NiTr0 iOrOxxo DartagnaN TheCure FurisO MetroNotte ToRSoLo register init-zero Pilszcz DjCaro wamper ToRQUaTo Alison Wenni^_^ Hambi MzMaNdY Howie^^ Chiwai EkinCheng Jenny^_^ die rcu |jp| |be| egg suka ircoholik "
        "|de| japanase zncbot latitanz kafir sparco invisible elk jazz esprit strange rex grasshopper miracle outlaw veronica artic| ToRDo ToRRoNe MusSi ToRBiDo gozmit ToReRo ToRReNTe Mediterraneo Sugar unregistered bohjan biskut xdos unix cheap android birc edit Robocop Neon Temp Apofis Seth Sokar Iron Control Kiler mrozek widzewiak klesk Dj Rcnet mybsd lis [d] resu` ussus_ ksychy sp kln "
        "psk Kulf0n daro darecki pan_ban Anonymouz atos MarRosso CommenDa miglia Spike Sc0rpion Krotone ViboValentia Arcaverde AlcaTRaz Adriatico MescaliNa PiPo_ RogeS sm0k kakashi naintails smuga howkey aven[gers] [neo] [dill] Aptajm marcin founder roger feedback M-k Madmax Piramida Hator Loginek Lill Polibuda Zeus` bouncer msdos gurl kongsi mamak scid mylinux sock nana ibm samba k-pop gyna k-chat mail "
        "chat yatie ircap Ho-Nam mynet rindunet qip eggies db fakap loco mircpro mircbot mynic bladez hackintosh egghelp kampung cisco girl skepticals nickname Uncle-B bohsia mircx kaktej Asia HelpAR VaneSSaBeLL AcHIni DjuNaBarnEs HydRA WilHElm- BrIanCHon LiLi Br0doWski Apus BoUdin0 ERebpAR RetIculum TucANA CAsIk CANes PuppIs BeNaZech BeRnaRDus Lupus IzrAileviC UlAIn AdaMI Bartels AGliNK Helon UlpAR "
        "BemELmaNS DelphINus AbBati FoRNAx BenKvicH Ulseth PIctoR BeJJini BroOWn Br00k AffanNU Achenbach BelloTTo AbrHHam CeNtAuRus Agutte AlbrECht AnGeLico Ar13S TAuRus BeReNIces AzARfAR AquIlA Br0uwEr BreYtenbaCH CAsImAR CAssIopeIA ColumbA CRux EuGen GeoFFrY HiPPolyter HoRologIum LAceRtA LeoMINoR NIsAIn NIsseth NoRmA PaVl0viC ScoRpIus SeRpeNs ShuRImAR artic TitoAguiAri ZIRpAR TuRfAR VAnIkAIn VolANs NIspAR "
        "CAsImAl ThiErry INdus Cetus PeTerFraNcio GRus MadDox PIscIs VulpeculA CeCily TRIANgulum CApRIcoRNus FraNtz TuRIen AdeMollo BrIgnOni AgReSti AustRAle BoTTinI BouVIer BrenTANA BriNdiSi CAelum DoRAdo ErNIeBarnEs Helseth JeNNiferBart leBrocQUy Lepus LyNx OctANs OphIuchus PeNeTriL PIsces PyxIs roKkmAn SAgIttA TelescopIum CRAteR PeRseus ShuRpAR CAsseth BeLLini ChAmAeleoN MIcRoscopIum Ad0lphE BoReAlIs ARA_ CARINA "
        "AquARIus_ BartoLomeo ShuRon t0r__ YaAcovAgam Betty- HydRus ANDRoMeD2 Mercurio HeRcules_ ORIoN- Br00ker Cepheus 276XAAAPU PegAsus_ CAspAR BoUchE MoNoceRos URsAMAjoR CAsIl AivaZZovskKy ERIdANus BoUdeWijNS LyR4 ERebseth ShuRseth AleChiNskY LIbRA Leo AceRbi AuRIgA BeNNo Bootes_ BriSSaud CIRcINus DRAco SAgIttAR2us WaSHingt0n JUliUs- TuRIk HansBellmEs PAvo SculptoR AddNet GemINI ANtlIA ShuRkAn BoUcheR Br0wn "
        "URsAMINoR VelA CoRvus_ BoWerANO AustRINA Agn0l KaziMIerZ PhoeNIx- Scutum SebAStieN VIRgo_ CANceR_ CygNus_ ZIRseth t0r_ ERebon Equuleus BouLAngeR CAson SextANs JBelliNi BourdiDIchoN AzARAth DiLDoSauRo PumPinks Callisto Cosenza Meschino Portos IoRobot Eclipse HighLander T0XiC Popoff PaLLa Indiano MDma Eastie BleacH PoSiX Slash_ InUtero FormaGGino riggiu tirrenico papera MaXMerilio MalandriNo ToRTiGLia "
        "ToRToRa BeLGo NetBeans NeverMind BlackSp1rit Ionico Anfetamina t0r ladyshrew ToRoNTo AsTRo` ToRCeTTo EnSi ToRNaDo ToRReTTa MaGReBiNo ToRBoSo ToRSiDa ToRCia ToRCiCoLLo Wokie RuMeNiNo ToRTiNo TheOne NOP oVaCoD KiFFa CLeMeNTiNo ToRaCe EviLDoG PoPkiss NeverDown EleCTrO CaM3LS_ Hulk StocaZZico YoUbEgGaReD Ocean aLBaNiN0 CaNeSeCCo AlwaysBack Crimson OuRwEeRiCiN Shorty BeeDeePee Punker ToRaLBa BeSTio BaBy_BluE "
        "TeSTiCoLo^ BieBeron Prosexionist svansen artic^";

#endif // TST_IRCNET_H
