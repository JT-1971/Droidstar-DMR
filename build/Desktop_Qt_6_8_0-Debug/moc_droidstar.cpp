/****************************************************************************
** Meta object code from reading C++ file 'droidstar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../droidstar.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'droidstar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDroidStarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDroidStarENDCLASS = QtMocHelpers::stringData(
    "DroidStar",
    "input_source_changed",
    "",
    "tgidsUpdated",
    "newTgids",
    "recentTgidsUpdated",
    "mode_changed",
    "module_changed",
    "slot_changed",
    "cc_changed",
    "update_data",
    "update_log",
    "open_vocoder_dialog",
    "update_settings",
    "connect_status_changed",
    "c",
    "in_audio_vol_changed",
    "tx_pressed",
    "tx_released",
    "tx_clicked",
    "dmrpc_state_changed",
    "dmr_tgid_changed",
    "m17_rate_changed",
    "m17_can_changed",
    "send_dtmf",
    "swtx_state_changed",
    "swrx_state_changed",
    "swtx_state",
    "swrx_state",
    "agc_state",
    "agc_state_changed",
    "rptr1_changed",
    "rptr2_changed",
    "mycall_changed",
    "urcall_changed",
    "usrtxt_changed",
    "dst_changed",
    "debug_changed",
    "update_devices",
    "set_callsign",
    "callsign",
    "set_dmrtgid",
    "dmrtgid",
    "set_slot",
    "slot",
    "set_cc",
    "cc",
    "tgid_text_changed",
    "s",
    "set_dmrid",
    "dmrid",
    "set_essid",
    "essid",
    "set_bm_password",
    "bmpwd",
    "set_tgif_password",
    "tgifpwd",
    "set_latitude",
    "lat",
    "set_longitude",
    "lon",
    "set_location",
    "loc",
    "set_description",
    "desc",
    "set_freq",
    "freq",
    "set_url",
    "url",
    "set_swid",
    "swid",
    "set_pkgid",
    "pkgid",
    "set_dmr_options",
    "dmropts",
    "set_dmr_pc",
    "pc",
    "set_module",
    "module",
    "set_protocol",
    "protocol",
    "set_input_volume",
    "v",
    "set_modelchange",
    "t",
    "set_mycall",
    "mycall",
    "set_urcall",
    "urcall",
    "set_rptr1",
    "rptr1",
    "set_rptr2",
    "rptr2",
    "set_usrtxt",
    "usrtxt",
    "set_txtimeout",
    "set_toggletx",
    "x",
    "set_xrf2ref",
    "set_ipv6",
    "ipv6",
    "set_vocoder",
    "vocoder",
    "set_modem",
    "modem",
    "set_playback",
    "playback",
    "set_capture",
    "capture",
    "set_swtx",
    "swtx",
    "set_swrx",
    "swrx",
    "set_agc",
    "agc",
    "set_mmdvm_direct",
    "mmdvm",
    "set_iaxport",
    "port",
    "set_dst",
    "dst",
    "set_debug",
    "debug",
    "set_modemRxFreq",
    "m",
    "set_modemTxFreq",
    "set_modemRxOffset",
    "set_modemTxOffset",
    "set_modemRxDCOffset",
    "set_modemTxDCOffset",
    "set_modemRxLevel",
    "set_modemTxLevel",
    "set_modemRFLevel",
    "set_modemTxDelay",
    "set_modemCWIdTxLevel",
    "set_modemDstarTxLevel",
    "set_modemDMRTxLevel",
    "set_modemYSFTxLevel",
    "set_modemP25TxLevel",
    "set_modemNXDNTxLevel",
    "set_modemBaud",
    "set_modemM17CAN",
    "r",
    "process_connect",
    "press_tx",
    "release_tx",
    "click_tx",
    "process_settings",
    "check_host_files",
    "update_host_files",
    "update_custom_hosts",
    "update_dmr_ids",
    "update_nxdn_ids",
    "process_mode_change",
    "process_host_change",
    "h",
    "dtmf_send_clicked",
    "get_modelchange",
    "get_label1",
    "get_label2",
    "get_label3",
    "get_label4",
    "get_label5",
    "get_label6",
    "get_data1",
    "get_data2",
    "get_data3",
    "get_data4",
    "get_data5",
    "get_data6",
    "get_ambestatustxt",
    "get_mmdvmstatustxt",
    "get_netstatustxt",
    "get_mode",
    "get_host",
    "get_module",
    "get_callsign",
    "get_dmrid",
    "get_essid",
    "get_bm_password",
    "get_tgif_password",
    "get_latitude",
    "get_longitude",
    "get_location",
    "get_description",
    "get_freq",
    "get_url",
    "get_swid",
    "get_pkgid",
    "get_dmr_options",
    "get_dmrtgid",
    "get_hosts",
    "get_ref_host",
    "get_dcs_host",
    "get_xrf_host",
    "get_ysf_host",
    "get_fcs_host",
    "get_dmr_host",
    "get_p25_host",
    "get_nxdn_host",
    "get_m17_host",
    "get_iax_host",
    "get_mycall",
    "get_urcall",
    "get_rptr1",
    "get_rptr2",
    "get_txtimeout",
    "get_error_text",
    "get_toggletx",
    "get_ipv6",
    "get_xrf2ref",
    "get_local_hosts",
    "get_vocoders",
    "get_modems",
    "get_playbacks",
    "get_captures",
    "get_modemRxFreq",
    "get_modemTxFreq",
    "get_modemRxOffset",
    "get_modemTxOffset",
    "get_modemRxDCOffset",
    "get_modemTxDCOffset",
    "get_modemRxLevel",
    "get_modemTxLevel",
    "get_modemRFLevel",
    "get_modemTxDelay",
    "get_modemCWIdTxLevel",
    "get_modemDstarTxLevel",
    "get_modemDMRTxLevel",
    "get_modemYSFTxLevel",
    "get_modemP25TxLevel",
    "get_modemNXDNTxLevel",
    "get_modemBaud",
    "get_modemM17CAN",
    "get_platform",
    "reset_connect_status",
    "get_monofont",
    "get_arch",
    "get_build_abi",
    "get_software_build",
    "download_file",
    "u",
    "file_downloaded",
    "url_downloaded",
    "get_output_level",
    "set_output_level",
    "l",
    "tts_changed",
    "tts_text_changed",
    "discover_devices",
    "process_dstar_hosts",
    "process_ysf_hosts",
    "process_fcs_rooms",
    "process_dmr_hosts",
    "process_p25_hosts",
    "process_nxdn_hosts",
    "process_m17_hosts",
    "process_iax_hosts",
    "process_dmr_ids",
    "process_nxdn_ids",
    "Mode::MODEINFO",
    "updatelog",
    "save_settings",
    "update_output_level",
    "addRecentTGID",
    "tgid",
    "loadRecentTGIDs",
    "clearRecentTGIDs"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDroidStarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     219,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      35,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2, 1328,    2, 0x06,    1 /* Public */,
       3,    1, 1333,    2, 0x06,    4 /* Public */,
       5,    0, 1336,    2, 0x06,    6 /* Public */,
       6,    0, 1337,    2, 0x06,    7 /* Public */,
       7,    1, 1338,    2, 0x06,    8 /* Public */,
       8,    1, 1341,    2, 0x06,   10 /* Public */,
       9,    1, 1344,    2, 0x06,   12 /* Public */,
      10,    0, 1347,    2, 0x06,   14 /* Public */,
      11,    1, 1348,    2, 0x06,   15 /* Public */,
      12,    0, 1351,    2, 0x06,   17 /* Public */,
      13,    0, 1352,    2, 0x06,   18 /* Public */,
      14,    1, 1353,    2, 0x06,   19 /* Public */,
      16,    1, 1356,    2, 0x06,   21 /* Public */,
      17,    0, 1359,    2, 0x06,   23 /* Public */,
      18,    0, 1360,    2, 0x06,   24 /* Public */,
      19,    1, 1361,    2, 0x06,   25 /* Public */,
      20,    1, 1364,    2, 0x06,   27 /* Public */,
      21,    1, 1367,    2, 0x06,   29 /* Public */,
      22,    1, 1370,    2, 0x06,   31 /* Public */,
      23,    1, 1373,    2, 0x06,   33 /* Public */,
      24,    1, 1376,    2, 0x06,   35 /* Public */,
      25,    1, 1379,    2, 0x06,   37 /* Public */,
      26,    1, 1382,    2, 0x06,   39 /* Public */,
      27,    1, 1385,    2, 0x06,   41 /* Public */,
      28,    1, 1388,    2, 0x06,   43 /* Public */,
      29,    1, 1391,    2, 0x06,   45 /* Public */,
      30,    1, 1394,    2, 0x06,   47 /* Public */,
      31,    1, 1397,    2, 0x06,   49 /* Public */,
      32,    1, 1400,    2, 0x06,   51 /* Public */,
      33,    1, 1403,    2, 0x06,   53 /* Public */,
      34,    1, 1406,    2, 0x06,   55 /* Public */,
      35,    1, 1409,    2, 0x06,   57 /* Public */,
      36,    1, 1412,    2, 0x06,   59 /* Public */,
      37,    1, 1415,    2, 0x06,   61 /* Public */,
      38,    0, 1418,    2, 0x06,   63 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      39,    1, 1419,    2, 0x0a,   64 /* Public */,
      41,    1, 1422,    2, 0x0a,   66 /* Public */,
      43,    1, 1425,    2, 0x0a,   68 /* Public */,
      45,    1, 1428,    2, 0x0a,   70 /* Public */,
      47,    1, 1431,    2, 0x0a,   72 /* Public */,
      49,    1, 1434,    2, 0x0a,   74 /* Public */,
      51,    1, 1437,    2, 0x0a,   76 /* Public */,
      53,    1, 1440,    2, 0x0a,   78 /* Public */,
      55,    1, 1443,    2, 0x0a,   80 /* Public */,
      57,    1, 1446,    2, 0x0a,   82 /* Public */,
      59,    1, 1449,    2, 0x0a,   84 /* Public */,
      61,    1, 1452,    2, 0x0a,   86 /* Public */,
      63,    1, 1455,    2, 0x0a,   88 /* Public */,
      65,    1, 1458,    2, 0x0a,   90 /* Public */,
      67,    1, 1461,    2, 0x0a,   92 /* Public */,
      69,    1, 1464,    2, 0x0a,   94 /* Public */,
      71,    1, 1467,    2, 0x0a,   96 /* Public */,
      73,    1, 1470,    2, 0x0a,   98 /* Public */,
      75,    1, 1473,    2, 0x0a,  100 /* Public */,
      77,    1, 1476,    2, 0x0a,  102 /* Public */,
      79,    1, 1479,    2, 0x0a,  104 /* Public */,
      81,    1, 1482,    2, 0x0a,  106 /* Public */,
      83,    1, 1485,    2, 0x0a,  108 /* Public */,
      85,    1, 1488,    2, 0x0a,  110 /* Public */,
      87,    1, 1491,    2, 0x0a,  112 /* Public */,
      89,    1, 1494,    2, 0x0a,  114 /* Public */,
      91,    1, 1497,    2, 0x0a,  116 /* Public */,
      93,    1, 1500,    2, 0x0a,  118 /* Public */,
      95,    1, 1503,    2, 0x0a,  120 /* Public */,
      96,    1, 1506,    2, 0x0a,  122 /* Public */,
      98,    1, 1509,    2, 0x0a,  124 /* Public */,
      99,    1, 1512,    2, 0x0a,  126 /* Public */,
     101,    1, 1515,    2, 0x0a,  128 /* Public */,
     103,    1, 1518,    2, 0x0a,  130 /* Public */,
     105,    1, 1521,    2, 0x0a,  132 /* Public */,
     107,    1, 1524,    2, 0x0a,  134 /* Public */,
     109,    1, 1527,    2, 0x0a,  136 /* Public */,
     111,    1, 1530,    2, 0x0a,  138 /* Public */,
     113,    1, 1533,    2, 0x0a,  140 /* Public */,
     115,    1, 1536,    2, 0x0a,  142 /* Public */,
     117,    1, 1539,    2, 0x0a,  144 /* Public */,
     119,    1, 1542,    2, 0x0a,  146 /* Public */,
     121,    1, 1545,    2, 0x0a,  148 /* Public */,
     123,    1, 1548,    2, 0x0a,  150 /* Public */,
     125,    1, 1551,    2, 0x0a,  152 /* Public */,
     126,    1, 1554,    2, 0x0a,  154 /* Public */,
     127,    1, 1557,    2, 0x0a,  156 /* Public */,
     128,    1, 1560,    2, 0x0a,  158 /* Public */,
     129,    1, 1563,    2, 0x0a,  160 /* Public */,
     130,    1, 1566,    2, 0x0a,  162 /* Public */,
     131,    1, 1569,    2, 0x0a,  164 /* Public */,
     132,    1, 1572,    2, 0x0a,  166 /* Public */,
     133,    1, 1575,    2, 0x0a,  168 /* Public */,
     134,    1, 1578,    2, 0x0a,  170 /* Public */,
     135,    1, 1581,    2, 0x0a,  172 /* Public */,
     136,    1, 1584,    2, 0x0a,  174 /* Public */,
     137,    1, 1587,    2, 0x0a,  176 /* Public */,
     138,    1, 1590,    2, 0x0a,  178 /* Public */,
     139,    1, 1593,    2, 0x0a,  180 /* Public */,
     140,    1, 1596,    2, 0x0a,  182 /* Public */,
     141,    1, 1599,    2, 0x0a,  184 /* Public */,
      22,    1, 1602,    2, 0x0a,  186 /* Public */,
     143,    0, 1605,    2, 0x0a,  188 /* Public */,
     144,    0, 1606,    2, 0x0a,  189 /* Public */,
     145,    0, 1607,    2, 0x0a,  190 /* Public */,
     146,    1, 1608,    2, 0x0a,  191 /* Public */,
     147,    0, 1611,    2, 0x0a,  193 /* Public */,
     148,    0, 1612,    2, 0x0a,  194 /* Public */,
     149,    0, 1613,    2, 0x0a,  195 /* Public */,
     150,    1, 1614,    2, 0x0a,  196 /* Public */,
     151,    0, 1617,    2, 0x0a,  198 /* Public */,
     152,    0, 1618,    2, 0x0a,  199 /* Public */,
     153,    1, 1619,    2, 0x0a,  200 /* Public */,
     154,    1, 1622,    2, 0x0a,  202 /* Public */,
     156,    1, 1625,    2, 0x0a,  204 /* Public */,
     157,    0, 1628,    2, 0x0a,  206 /* Public */,
     158,    0, 1629,    2, 0x0a,  207 /* Public */,
     159,    0, 1630,    2, 0x0a,  208 /* Public */,
     160,    0, 1631,    2, 0x0a,  209 /* Public */,
     161,    0, 1632,    2, 0x0a,  210 /* Public */,
     162,    0, 1633,    2, 0x0a,  211 /* Public */,
     163,    0, 1634,    2, 0x0a,  212 /* Public */,
     164,    0, 1635,    2, 0x0a,  213 /* Public */,
     165,    0, 1636,    2, 0x0a,  214 /* Public */,
     166,    0, 1637,    2, 0x0a,  215 /* Public */,
     167,    0, 1638,    2, 0x0a,  216 /* Public */,
     168,    0, 1639,    2, 0x0a,  217 /* Public */,
     169,    0, 1640,    2, 0x0a,  218 /* Public */,
     170,    0, 1641,    2, 0x0a,  219 /* Public */,
     171,    0, 1642,    2, 0x0a,  220 /* Public */,
     172,    0, 1643,    2, 0x0a,  221 /* Public */,
     173,    0, 1644,    2, 0x0a,  222 /* Public */,
     174,    0, 1645,    2, 0x0a,  223 /* Public */,
     175,    0, 1646,    2, 0x0a,  224 /* Public */,
     176,    0, 1647,    2, 0x0a,  225 /* Public */,
     177,    0, 1648,    2, 0x0a,  226 /* Public */,
     178,    0, 1649,    2, 0x0a,  227 /* Public */,
     179,    0, 1650,    2, 0x0a,  228 /* Public */,
     180,    0, 1651,    2, 0x0a,  229 /* Public */,
     181,    0, 1652,    2, 0x0a,  230 /* Public */,
     182,    0, 1653,    2, 0x0a,  231 /* Public */,
     183,    0, 1654,    2, 0x0a,  232 /* Public */,
     184,    0, 1655,    2, 0x0a,  233 /* Public */,
     185,    0, 1656,    2, 0x0a,  234 /* Public */,
     186,    0, 1657,    2, 0x0a,  235 /* Public */,
     187,    0, 1658,    2, 0x0a,  236 /* Public */,
     188,    0, 1659,    2, 0x0a,  237 /* Public */,
     189,    0, 1660,    2, 0x0a,  238 /* Public */,
     190,    0, 1661,    2, 0x0a,  239 /* Public */,
     191,    0, 1662,    2, 0x0a,  240 /* Public */,
     192,    0, 1663,    2, 0x0a,  241 /* Public */,
     193,    0, 1664,    2, 0x0a,  242 /* Public */,
     194,    0, 1665,    2, 0x0a,  243 /* Public */,
     195,    0, 1666,    2, 0x0a,  244 /* Public */,
     196,    0, 1667,    2, 0x0a,  245 /* Public */,
     197,    0, 1668,    2, 0x0a,  246 /* Public */,
     198,    0, 1669,    2, 0x0a,  247 /* Public */,
     199,    0, 1670,    2, 0x0a,  248 /* Public */,
     200,    0, 1671,    2, 0x0a,  249 /* Public */,
     201,    0, 1672,    2, 0x0a,  250 /* Public */,
     202,    0, 1673,    2, 0x0a,  251 /* Public */,
     203,    0, 1674,    2, 0x0a,  252 /* Public */,
     204,    0, 1675,    2, 0x0a,  253 /* Public */,
     205,    0, 1676,    2, 0x0a,  254 /* Public */,
     206,    0, 1677,    2, 0x0a,  255 /* Public */,
     207,    0, 1678,    2, 0x0a,  256 /* Public */,
     208,    0, 1679,    2, 0x0a,  257 /* Public */,
     209,    0, 1680,    2, 0x0a,  258 /* Public */,
     210,    0, 1681,    2, 0x0a,  259 /* Public */,
     211,    0, 1682,    2, 0x0a,  260 /* Public */,
     212,    0, 1683,    2, 0x0a,  261 /* Public */,
     213,    0, 1684,    2, 0x0a,  262 /* Public */,
     214,    0, 1685,    2, 0x0a,  263 /* Public */,
     215,    0, 1686,    2, 0x0a,  264 /* Public */,
     216,    0, 1687,    2, 0x0a,  265 /* Public */,
     217,    0, 1688,    2, 0x0a,  266 /* Public */,
     218,    0, 1689,    2, 0x0a,  267 /* Public */,
     219,    0, 1690,    2, 0x0a,  268 /* Public */,
     220,    0, 1691,    2, 0x0a,  269 /* Public */,
     221,    0, 1692,    2, 0x0a,  270 /* Public */,
     222,    0, 1693,    2, 0x0a,  271 /* Public */,
     223,    0, 1694,    2, 0x0a,  272 /* Public */,
     224,    0, 1695,    2, 0x0a,  273 /* Public */,
     225,    0, 1696,    2, 0x0a,  274 /* Public */,
     226,    0, 1697,    2, 0x0a,  275 /* Public */,
     227,    0, 1698,    2, 0x0a,  276 /* Public */,
     228,    0, 1699,    2, 0x0a,  277 /* Public */,
     229,    0, 1700,    2, 0x0a,  278 /* Public */,
     230,    0, 1701,    2, 0x0a,  279 /* Public */,
     231,    0, 1702,    2, 0x0a,  280 /* Public */,
     232,    0, 1703,    2, 0x0a,  281 /* Public */,
     233,    0, 1704,    2, 0x0a,  282 /* Public */,
     234,    0, 1705,    2, 0x0a,  283 /* Public */,
     235,    0, 1706,    2, 0x0a,  284 /* Public */,
     236,    0, 1707,    2, 0x0a,  285 /* Public */,
     237,    0, 1708,    2, 0x0a,  286 /* Public */,
     238,    0, 1709,    2, 0x0a,  287 /* Public */,
     239,    0, 1710,    2, 0x0a,  288 /* Public */,
     240,    2, 1711,    2, 0x0a,  289 /* Public */,
     240,    1, 1716,    2, 0x2a,  292 /* Public | MethodCloned */,
     242,    1, 1719,    2, 0x0a,  294 /* Public */,
     243,    1, 1722,    2, 0x0a,  296 /* Public */,
     244,    0, 1725,    2, 0x0a,  298 /* Public */,
     245,    1, 1726,    2, 0x0a,  299 /* Public */,
     247,    1, 1729,    2, 0x0a,  301 /* Public */,
     248,    1, 1732,    2, 0x0a,  303 /* Public */,
     249,    0, 1735,    2, 0x08,  305 /* Private */,
     250,    1, 1736,    2, 0x08,  306 /* Private */,
     251,    0, 1739,    2, 0x08,  308 /* Private */,
     252,    0, 1740,    2, 0x08,  309 /* Private */,
     253,    0, 1741,    2, 0x08,  310 /* Private */,
     254,    0, 1742,    2, 0x08,  311 /* Private */,
     255,    0, 1743,    2, 0x08,  312 /* Private */,
     256,    0, 1744,    2, 0x08,  313 /* Private */,
     257,    0, 1745,    2, 0x08,  314 /* Private */,
     258,    0, 1746,    2, 0x08,  315 /* Private */,
     259,    0, 1747,    2, 0x08,  316 /* Private */,
      10,    1, 1748,    2, 0x08,  317 /* Private */,
     261,    1, 1751,    2, 0x08,  319 /* Private */,
     262,    0, 1754,    2, 0x08,  321 /* Private */,
     263,    1, 1755,    2, 0x08,  322 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
     264,    1, 1758,    2, 0x02,  324 /* Public */,
     266,    0, 1761,    2, 0x102,  326 /* Public | MethodIsConst  */,
     267,    0, 1762,    2, 0x02,  327 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   66,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   72,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void, QMetaType::Int,   76,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void, QMetaType::QString,   80,
    QMetaType::Void, QMetaType::QReal,   82,
    QMetaType::Void, QMetaType::Bool,   84,
    QMetaType::Void, QMetaType::QString,   86,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QString,   92,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void, QMetaType::Bool,  100,
    QMetaType::Void, QMetaType::QString,  102,
    QMetaType::Void, QMetaType::QString,  104,
    QMetaType::Void, QMetaType::QString,  106,
    QMetaType::Void, QMetaType::QString,  108,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void, QMetaType::Bool,  116,
    QMetaType::Void, QMetaType::QString,  118,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::Bool,  142,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::QString,  155,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,  241,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::UShort,
    QMetaType::Void, QMetaType::UShort,  246,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 260,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,  246,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,  265,
    QMetaType::QStringList,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DroidStar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDroidStarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDroidStarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDroidStarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DroidStar, std::true_type>,
        // method 'input_source_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'tgidsUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'recentTgidsUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'module_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        // method 'slot_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cc_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'update_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'open_vocoder_dialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_settings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connect_status_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'in_audio_vol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'tx_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tx_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tx_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'dmrpc_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dmr_tgid_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'm17_rate_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'm17_can_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'send_dtmf'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'swtx_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'swrx_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'swtx_state'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'swrx_state'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'agc_state'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'agc_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rptr1_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'rptr2_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'mycall_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'urcall_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'usrtxt_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'dst_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'debug_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'update_devices'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_callsign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_dmrtgid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'set_cc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'tgid_text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_dmrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_essid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_bm_password'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_tgif_password'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_latitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_longitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_location'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_description'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_freq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_url'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_swid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_pkgid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_dmr_options'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_dmr_pc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'set_module'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_protocol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_input_volume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'set_modelchange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_mycall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_urcall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_rptr1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_rptr2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_usrtxt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_txtimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_toggletx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_xrf2ref'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_ipv6'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_vocoder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_playback'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_capture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_swtx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_swrx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_agc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_mmdvm_direct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_iaxport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_dst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_debug'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_modemRxFreq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemTxFreq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemRxOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemTxOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemRxDCOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemTxDCOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemRxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemTxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemRFLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemTxDelay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemCWIdTxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemDstarTxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemDMRTxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemYSFTxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemP25TxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemNXDNTxLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemBaud'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'set_modemM17CAN'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'm17_rate_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'process_connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'press_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'release_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'click_tx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'process_settings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'check_host_files'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_host_files'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_custom_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'update_dmr_ids'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_nxdn_ids'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_mode_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'process_host_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dtmf_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modelchange'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'get_label1'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_label2'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_label3'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_label4'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_label5'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_label6'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_data1'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_data2'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_data3'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_data4'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_data5'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_data6'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_ambestatustxt'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_mmdvmstatustxt'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_netstatustxt'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_mode'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_module'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_callsign'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_dmrid'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_essid'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_bm_password'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_tgif_password'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_latitude'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_longitude'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_location'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_description'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_freq'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_url'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_swid'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_pkgid'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_dmr_options'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_dmrtgid'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_hosts'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'get_ref_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_dcs_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_xrf_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_ysf_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_fcs_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_dmr_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_p25_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_nxdn_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_m17_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_iax_host'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_mycall'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_urcall'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_rptr1'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_rptr2'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_txtimeout'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_error_text'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_toggletx'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'get_ipv6'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'get_xrf2ref'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'get_local_hosts'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_vocoders'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'get_modems'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'get_playbacks'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'get_captures'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'get_modemRxFreq'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemTxFreq'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemRxOffset'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemTxOffset'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemRxDCOffset'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemTxDCOffset'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemRxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemTxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemRFLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemTxDelay'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemCWIdTxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemDstarTxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemDMRTxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemYSFTxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemP25TxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemNXDNTxLevel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemBaud'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_modemM17CAN'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_platform'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'reset_connect_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'get_monofont'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_arch'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_build_abi'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_software_build'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'download_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'download_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'file_downloaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'url_downloaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'get_output_level'
        QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>,
        // method 'set_output_level'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>,
        // method 'tts_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'tts_text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'discover_devices'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_dstar_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'process_ysf_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_fcs_rooms'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_dmr_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_p25_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_nxdn_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_m17_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_iax_hosts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_dmr_ids'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process_nxdn_ids'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mode::MODEINFO, std::false_type>,
        // method 'updatelog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'save_settings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_output_level'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned short, std::false_type>,
        // method 'addRecentTGID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadRecentTGIDs'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'clearRecentTGIDs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DroidStar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DroidStar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->input_source_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->tgidsUpdated((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->recentTgidsUpdated(); break;
        case 3: _t->mode_changed(); break;
        case 4: _t->module_changed((*reinterpret_cast< std::add_pointer_t<char>>(_a[1]))); break;
        case 5: _t->slot_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->cc_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->update_data(); break;
        case 8: _t->update_log((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->open_vocoder_dialog(); break;
        case 10: _t->update_settings(); break;
        case 11: _t->connect_status_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->in_audio_vol_changed((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 13: _t->tx_pressed(); break;
        case 14: _t->tx_released(); break;
        case 15: _t->tx_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->dmrpc_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->dmr_tgid_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->m17_rate_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->m17_can_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->send_dtmf((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 21: _t->swtx_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->swrx_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->swtx_state((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->swrx_state((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->agc_state((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->agc_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->rptr1_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->rptr2_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->mycall_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->urcall_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->usrtxt_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->dst_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->debug_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->update_devices(); break;
        case 35: _t->set_callsign((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->set_dmrtgid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 37: _t->set_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->set_cc((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->tgid_text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->set_dmrid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->set_essid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 42: _t->set_bm_password((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->set_tgif_password((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->set_latitude((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->set_longitude((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 46: _t->set_location((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 47: _t->set_description((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->set_freq((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 49: _t->set_url((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 50: _t->set_swid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->set_pkgid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 52: _t->set_dmr_options((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 53: _t->set_dmr_pc((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->set_module((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 55: _t->set_protocol((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 56: _t->set_input_volume((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 57: _t->set_modelchange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 58: _t->set_mycall((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 59: _t->set_urcall((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 60: _t->set_rptr1((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 61: _t->set_rptr2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 62: _t->set_usrtxt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 63: _t->set_txtimeout((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 64: _t->set_toggletx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 65: _t->set_xrf2ref((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->set_ipv6((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: _t->set_vocoder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 68: _t->set_modem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 69: _t->set_playback((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 70: _t->set_capture((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 71: _t->set_swtx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 72: _t->set_swrx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 73: _t->set_agc((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 74: _t->set_mmdvm_direct((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 75: _t->set_iaxport((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 76: _t->set_dst((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 77: _t->set_debug((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 78: _t->set_modemRxFreq((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 79: _t->set_modemTxFreq((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 80: _t->set_modemRxOffset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 81: _t->set_modemTxOffset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 82: _t->set_modemRxDCOffset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 83: _t->set_modemTxDCOffset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 84: _t->set_modemRxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 85: _t->set_modemTxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 86: _t->set_modemRFLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 87: _t->set_modemTxDelay((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 88: _t->set_modemCWIdTxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 89: _t->set_modemDstarTxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 90: _t->set_modemDMRTxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 91: _t->set_modemYSFTxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 92: _t->set_modemP25TxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 93: _t->set_modemNXDNTxLevel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 94: _t->set_modemBaud((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 95: _t->set_modemM17CAN((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 96: _t->m17_rate_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 97: _t->process_connect(); break;
        case 98: _t->press_tx(); break;
        case 99: _t->release_tx(); break;
        case 100: _t->click_tx((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 101: _t->process_settings(); break;
        case 102: _t->check_host_files(); break;
        case 103: _t->update_host_files(); break;
        case 104: _t->update_custom_hosts((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 105: _t->update_dmr_ids(); break;
        case 106: _t->update_nxdn_ids(); break;
        case 107: _t->process_mode_change((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 108: _t->process_host_change((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 109: _t->dtmf_send_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 110: { bool _r = _t->get_modelchange();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 111: { QString _r = _t->get_label1();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 112: { QString _r = _t->get_label2();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 113: { QString _r = _t->get_label3();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 114: { QString _r = _t->get_label4();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 115: { QString _r = _t->get_label5();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 116: { QString _r = _t->get_label6();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 117: { QString _r = _t->get_data1();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 118: { QString _r = _t->get_data2();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 119: { QString _r = _t->get_data3();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 120: { QString _r = _t->get_data4();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 121: { QString _r = _t->get_data5();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 122: { QString _r = _t->get_data6();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 123: { QString _r = _t->get_ambestatustxt();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 124: { QString _r = _t->get_mmdvmstatustxt();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 125: { QString _r = _t->get_netstatustxt();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 126: { QString _r = _t->get_mode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 127: { QString _r = _t->get_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 128: { QString _r = _t->get_module();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 129: { QString _r = _t->get_callsign();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 130: { QString _r = _t->get_dmrid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 131: { QString _r = _t->get_essid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 132: { QString _r = _t->get_bm_password();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 133: { QString _r = _t->get_tgif_password();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 134: { QString _r = _t->get_latitude();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 135: { QString _r = _t->get_longitude();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 136: { QString _r = _t->get_location();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 137: { QString _r = _t->get_description();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 138: { QString _r = _t->get_freq();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 139: { QString _r = _t->get_url();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 140: { QString _r = _t->get_swid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 141: { QString _r = _t->get_pkgid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 142: { QString _r = _t->get_dmr_options();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 143: { QString _r = _t->get_dmrtgid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 144: { QStringList _r = _t->get_hosts();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 145: { QString _r = _t->get_ref_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 146: { QString _r = _t->get_dcs_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 147: { QString _r = _t->get_xrf_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 148: { QString _r = _t->get_ysf_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 149: { QString _r = _t->get_fcs_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 150: { QString _r = _t->get_dmr_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 151: { QString _r = _t->get_p25_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 152: { QString _r = _t->get_nxdn_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 153: { QString _r = _t->get_m17_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 154: { QString _r = _t->get_iax_host();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 155: { QString _r = _t->get_mycall();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 156: { QString _r = _t->get_urcall();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 157: { QString _r = _t->get_rptr1();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 158: { QString _r = _t->get_rptr2();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 159: { QString _r = _t->get_txtimeout();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 160: { QString _r = _t->get_error_text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 161: { bool _r = _t->get_toggletx();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 162: { bool _r = _t->get_ipv6();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 163: { bool _r = _t->get_xrf2ref();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 164: { QString _r = _t->get_local_hosts();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 165: { QStringList _r = _t->get_vocoders();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 166: { QStringList _r = _t->get_modems();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 167: { QStringList _r = _t->get_playbacks();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 168: { QStringList _r = _t->get_captures();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 169: { QString _r = _t->get_modemRxFreq();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 170: { QString _r = _t->get_modemTxFreq();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 171: { QString _r = _t->get_modemRxOffset();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 172: { QString _r = _t->get_modemTxOffset();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 173: { QString _r = _t->get_modemRxDCOffset();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 174: { QString _r = _t->get_modemTxDCOffset();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 175: { QString _r = _t->get_modemRxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 176: { QString _r = _t->get_modemTxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 177: { QString _r = _t->get_modemRFLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 178: { QString _r = _t->get_modemTxDelay();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 179: { QString _r = _t->get_modemCWIdTxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 180: { QString _r = _t->get_modemDstarTxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 181: { QString _r = _t->get_modemDMRTxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 182: { QString _r = _t->get_modemYSFTxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 183: { QString _r = _t->get_modemP25TxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 184: { QString _r = _t->get_modemNXDNTxLevel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 185: { QString _r = _t->get_modemBaud();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 186: { QString _r = _t->get_modemM17CAN();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 187: { QString _r = _t->get_platform();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 188: _t->reset_connect_status(); break;
        case 189: { QString _r = _t->get_monofont();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 190: { QString _r = _t->get_arch();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 191: { QString _r = _t->get_build_abi();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 192: { QString _r = _t->get_software_build();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 193: _t->download_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 194: _t->download_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 195: _t->file_downloaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 196: _t->url_downloaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 197: { ushort _r = _t->get_output_level();
            if (_a[0]) *reinterpret_cast< ushort*>(_a[0]) = std::move(_r); }  break;
        case 198: _t->set_output_level((*reinterpret_cast< std::add_pointer_t<ushort>>(_a[1]))); break;
        case 199: _t->tts_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 200: _t->tts_text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 201: _t->discover_devices(); break;
        case 202: _t->process_dstar_hosts((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 203: _t->process_ysf_hosts(); break;
        case 204: _t->process_fcs_rooms(); break;
        case 205: _t->process_dmr_hosts(); break;
        case 206: _t->process_p25_hosts(); break;
        case 207: _t->process_nxdn_hosts(); break;
        case 208: _t->process_m17_hosts(); break;
        case 209: _t->process_iax_hosts(); break;
        case 210: _t->process_dmr_ids(); break;
        case 211: _t->process_nxdn_ids(); break;
        case 212: _t->update_data((*reinterpret_cast< std::add_pointer_t<Mode::MODEINFO>>(_a[1]))); break;
        case 213: _t->updatelog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 214: _t->save_settings(); break;
        case 215: _t->update_output_level((*reinterpret_cast< std::add_pointer_t<ushort>>(_a[1]))); break;
        case 216: _t->addRecentTGID((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 217: { QStringList _r = _t->loadRecentTGIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 218: _t->clearRecentTGIDs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DroidStar::*)(int , QString );
            if (_t _q_method = &DroidStar::input_source_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(const QStringList & );
            if (_t _q_method = &DroidStar::tgidsUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::recentTgidsUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::mode_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(char );
            if (_t _q_method = &DroidStar::module_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::slot_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::cc_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::update_data; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::update_log; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::open_vocoder_dialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::update_settings; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::connect_status_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(qreal );
            if (_t _q_method = &DroidStar::in_audio_vol_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::tx_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::tx_released; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(bool );
            if (_t _q_method = &DroidStar::tx_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::dmrpc_state_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::dmr_tgid_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::m17_rate_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::m17_can_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QByteArray );
            if (_t _q_method = &DroidStar::send_dtmf; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::swtx_state_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::swrx_state_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::swtx_state; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::swrx_state; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::agc_state; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(int );
            if (_t _q_method = &DroidStar::agc_state_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::rptr1_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::rptr2_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::mycall_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::urcall_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::usrtxt_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(QString );
            if (_t _q_method = &DroidStar::dst_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)(bool );
            if (_t _q_method = &DroidStar::debug_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (DroidStar::*)();
            if (_t _q_method = &DroidStar::update_devices; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
    }
}

const QMetaObject *DroidStar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DroidStar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDroidStarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DroidStar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 219)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 219;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 219)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 219;
    }
    return _id;
}

// SIGNAL 0
void DroidStar::input_source_changed(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DroidStar::tgidsUpdated(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DroidStar::recentTgidsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DroidStar::mode_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DroidStar::module_changed(char _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DroidStar::slot_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DroidStar::cc_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DroidStar::update_data()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DroidStar::update_log(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DroidStar::open_vocoder_dialog()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DroidStar::update_settings()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DroidStar::connect_status_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DroidStar::in_audio_vol_changed(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DroidStar::tx_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void DroidStar::tx_released()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void DroidStar::tx_clicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DroidStar::dmrpc_state_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DroidStar::dmr_tgid_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DroidStar::m17_rate_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DroidStar::m17_can_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DroidStar::send_dtmf(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DroidStar::swtx_state_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DroidStar::swrx_state_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DroidStar::swtx_state(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DroidStar::swrx_state(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DroidStar::agc_state(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DroidStar::agc_state_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DroidStar::rptr1_changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DroidStar::rptr2_changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void DroidStar::mycall_changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void DroidStar::urcall_changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void DroidStar::usrtxt_changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void DroidStar::dst_changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void DroidStar::debug_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void DroidStar::update_devices()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}
QT_WARNING_POP
