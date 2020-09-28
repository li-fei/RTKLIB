# RTKLIB

## 简介

  RTKLIB: An Open Source Program Package for GNSS Positioning


## status

| [CI][ci-link] |
|---------------|
| ![ci-badge]  |

| [Windows][win-link] | [Ubuntu][ubuntu-link] | [MacOS][macos-link] |
|---------------|---------------|-----------------| 
| ![win-badge]  | ![ubuntu-badge]  | ![macos-badge]| 

| [Release][release-link] |
|---------------|
| ![release-badge]  |

[ci-link]: https://github.com/li-fei/RTKLIB/actions?query=workflow%3ACI
[ci-badge]: https://github.com/li-fei/RTKLIB/workflows/CI/badge.svg "CI"

[ubuntu-link]: https://github.com/li-fei/RTKLIB/actions?query=workflow%3AUbuntu
[ubuntu-badge]: https://github.com/li-fei/RTKLIB/workflows/Ubuntu/badge.svg "Ubuntu"

[win-link]: https://github.com/li-fei/RTKLIB/actions?query=workflow%3AWindows
[win-badge]: https://github.com/li-fei/RTKLIB/workflows/Windows/badge.svg  "Windows"

[macos-link]: https://github.com/li-fei/RTKLIB/actions?query=workflow%3AMacOS
[macos-badge]: https://github.com/li-fei/RTKLIB/workflows/MacOS/badge.svg "MacOS"

[release-link]: https://github.com/li-fei/RTKLIB/releases
[release-badge]: https://img.shields.io/github/release/li-fei/RTKLIB.svg?style=flat-square "Release status"


-----------------------------------------------------------------------------------------------------------------

#
#  RTKLIB 2.4.3 Betas
#

DESCRIPTION

The development branch for RTKLIB 2.4.3.



UPDATE HISTORY

2014/09/07  2.4.3 b1 <br> 
                      add 3-panel and veritical-panel modes for RTKNAVI <br>
                      add sky image overlay to skyplot for RTKPLOT <br>
                      fix invalid identification of obs type \"C2\" (\#113) <br>
                      fix invalid format of saved image by RTKPLOT (\#114) <br>
                      
2014/10/21  2.4.3 b2<br>
                      add pos2-bdsarmode for beidou amb-res option<br>
                      add beidou amb-res option for rtknavi and rtkpost<br>
                      support stdin/stdout if -in/-out omitted in str2str<br>
                      strtok() -> strtok_r() in expath() for thread-safe<br>
                      fix problem on week rollover in rtcm 2 type 14<br>
                      fix problem on reading "C2" in rinex 2.12<br>
                      fix bug on clock error variance in peph2pos()<br>
                      fix bug on P0(a[3]) computation in tide_oload()<br>
                      fix bug on m2 computation in tide_pole()<br>
                      fix bug on receiver option -GL*,-RL*,-JL* for javad<br>
                      fix bug on receiver option -GL*,-RL*,-EL* for novatel<br>
                      
2014/10/24  2.4.3 b3<br>  fix bug on beidou amb-res with pos2-bdsarmode=0<br>
                      fix bug on return of var_uraeph() if ura<0||15<ura<br>
                      
2014/11/08  2.4.3 b4<br>  fix getconfig error (87) with bluetooth device<br><br>
                      fix bug on ar-degradation by unhealthy satellites<br>
                      support qzss navigation subframes by decode_frame()<br>
                      add receiver option -RT_INP for rtcm3<br>
                      support message RXM-RAWX and RXM-SFRBX for u-blox<br>
                      add option -a, -i and -o for str2str<br>
                      merge updates of src/rcv/rt17.c (pull-req \#45)<br>
                      
2014/11/09  2.4.3 b5<br>  support glonass, qzss and beidou for skytraq<br>

2016/01/23  2.4.3 b6<br>  merge 2.4.2 p11 bug fixes<br>
                      update ppp/ppp-ar features<br>
                      support septentrio<br>
                      
2016/01/26  2.4.3 b7<br>  fix bugs \#126,\#127,\#128,\#129,\#130,\#131<br>

2016/01/28  2.4.3 b8<br>  support galileo navigation data in u-blox RXM-SFRBX<br>

2016/05/10  2.4.3 b9<br>  unsupport ppp-ar features<br>

2016/05/25  2.4.3 b10<br> fix several bugs<br>
                      update data/TLE_GNSS_SATNO.txt<br>
                      repository for RTKLIB/bin is moved to new RTKLIB_bin to<br>
                      reduce repository size.<br>
                      septentrio.c is updated by Apr 6 ver by JensReimann.<br>
                      
2016/06/12  2.4.3 b11<br> fix several bugs<br>
                      support solution ground track pane in rtknavi<br>
                      support gpx conversion function to rtkpost and pos2kml<br>
                      support shapefile in rtkplot<br>
                      add data/ubx_m8p_ref_glo/bds_1hz.cmd<br>
                      
2016/06/21  2.4.3 b12<br> support GPX format as waypoints of RTKPLOT<br>
                      add menu Map Layer of RTKPLOT<br>
                      support solution status format as input of RTKPLOT<br>
                      support solution status format as output of RTKNAVI<br>
                      
2016/07/19  2.4.3 b13<br> support IRNSS<br>
                      support RINEX 3.03<br>
                      add src/rcv/cmr.c<br>
                      add half-cycle vaild check for ublox ubx-trk-meas<br>
                      add leap second before 2017/1/1 00:00:00<br>
                      support averaging single pos as base position<br>
                      
2016/07/22  2.4.3 b14<br> fix a fatal bug for baseline analysis<br>

2016/07/29  2.4.3 b15<br> merge Qt port by JensReimann<br>
                      add output of received stream to tcp port for serial<br>
                      nename api compress() -> rtk_uncompress()<br>
                      nename api crc16()    -> rtk_crc16()<br>
                      nename api crc24q()   -> rtk_crc24q()<br>
                      nename api crc32()    -> rtk_crc32()<br>
                      
2016/07/31  2.4.3 b16<br> fix several bugs<br>
                      improve draw speed of gis data in rtkplot<br>
                      add tcp output option of input stream from serial output<br>
                      add command of serial output<br>
                      add out-outsingle, out-maxsolstd options<br>
                      add commands for u-blox M8P<br>
                      
2016/08/20  2.4.3 b17<br> fix several bugs<br>
                      merge pull request #180<br>
                      merge pull request #199<br>
                      merge pull request #206<br>
                      binary ap compiled by C++ builder 10.1 Berlin<br>
                      add ap rtkpost_win64, rtknavi_win64, rnx2rtkp_win64<br>
                      add ap rtkpost_win64, rtknavi_win64, rnx2rtkp_win64<br>
                      
2016/08/20  2.4.3 b18<br> fix #134 (loss-of-lock not recognized in RTCM MSM 6 or 7)<br>

2016/08/29  2.4.3 b19<br> add option -STD_SLIP for u-blox receiver driver<br>
                      fix on half-cyc valid for sbas in u-blox trkmeas<br>
                      update kelper terminate condition for alm2pos(),eph2pos()<br>
                      fix bug on week overflow in time2gpst(),gpst2time()<br>
                      fix bug on starting serial thread for windows<br>
                      fix bug on mark and path in Google Earth view of RTKPLOT<br>
                      add protocol analysis in input stream monitor of STRSVR<br>
                      add window size extension of RTKPOST and RTKCONV<br>
                      
2016/09/03  2.4.3 b20<br> add ntrip caster functions<br>

2016/09/05  2.4.3 b21<br> fix several bugs<br>

2016/09/06  2.4.3 b22<br> fix several bugs<br>
                      add app/str2str/run_cast.sh for ntrip caster control <br>
                      
2016/09/06  2.4.3 b23<br> fix several bugs<br>
                      add -sys option for rnx2rtkp<br>
                      add 4- and 5-panel modes for rtknavi<br>
                      
2016/09/19  2.4.3 b24<br> fix several bugs<br>
                      change api rtksvrstart()<br>
                      add minimized panel mode of rtklaunch<br>
                      add relay back message of output streams to strsvr<br>
                      add option -b to str2str<br>
                      support multiple remote console connections by rtkrcv<br>
                      add option -w to rtkrcv<br>
                      
2016/09/25  2.4.3 b25<br> fix several bugs<br>
                      add ap rtkvideo<br>
                      add ap rtkvplayer<br>
                      change build environment to C++ builder 10.1 Berlin<br>
                      
2016/10/01  2.4.3 b26<br> fix several bugs<br>
                      change api rtksvrstart(), strsvrstart()<br>
                      support udp server and client for stream types<br>
                      support periodic receiver commands by rtknavi, strsvr<br>
                      
2017/04/25  2.4.3 b27<br> fix several bugs<br>

2017/05/26  2.4.3 b28<br> fix bug on decoding skytraq extended raw message<br>
                      add rcv/tersus.c to support tersus BX306<br>
                      
2017/09/02  2.4.3 b29<br> fix bugs<br>

2018/10/10  2.4.3 b30<br> support u-blox zed-f9p<br>
                      support api-key for gmview of rtkplot<br>
                      improve galileo sisa, i/nav and f/nav hadling<br>
                      fix many bugs<br>
                      
2018/11/05  2.4.3 b31<br> update rtcm mt for beidou ephemeirs (1047->1042)<br>
                      fix bug on default stream playback speed (= 0)<br>
                      fix bug on stream file playback as slave mode<br>
                      fix bug on timeset() in gpst instead of utc<br>
                      fix problem on invalid time in message monitor for rtcm 3<br>
                      fix problem on number of cell-mask overflow for rtcm msm (#143)<br>
                      fix problem on missing QZSS L2C signal for u-blox rxm-rawx<br>
                      
2019/05/10  2.4.3 b32<br> support beidou C36-37 (#145)<br>
                      fix bug on dropping message on tcp stream (#144)<br>
                      save galileo E5b data to obs index 2 in struct obs_t<br>
                      disable ambiguity resolution of gps-qzss for rel-positioning<br>
                      add test of i/nav word type 5 on reading galileo ephemeris<br>
                      support u-blox zed-f9p rxm-rawx, rxm-sfrbx<br>
                      
2019/08/19  2.4.3 b33<br> support galileo sisa index for reading rinex nav data<br>
                      support binex upgraded galileo ephemeris (0x01-14)<br>
                      support 460800 and 921600 bps for serial stream<br>
                      fix bug on return value of resamb_LAMBDA() error<br>
                      



