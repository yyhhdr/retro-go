/**
 * IMPORTANT: This file must be opened and saved as ISO 8859-1 (Latin-1)!
 * Retro-Go does NOT understand UTF-8 or any other encoding.
 * If the following looks like gibberish, your encoding is wrong: � � � � � � � �
 */

#include "rg_localization.h"

static const char *language_names[RG_LANG_MAX] = {"English", "Francais", "中文", "日本語"};

static const char *translations[][RG_LANG_MAX] =
{
    {
        [RG_LANG_EN] = "Never",
        [RG_LANG_FR] = "Jamais",
        [RG_LANG_SC] = "从不",
        [RG_LANG_JP] = "決して"
    },
    {
        [RG_LANG_EN] = "Always",
        [RG_LANG_FR] = "Toujours",
        [RG_LANG_SC] = "总是",
        [RG_LANG_JP] = "いつも"
    },
    {
        [RG_LANG_EN] = "Composite",
        [RG_LANG_FR] = "Composite",
    },
    {
        [RG_LANG_EN] = "NES Classic",
        [RG_LANG_FR] = "NES Classic",
    },
    {
        [RG_LANG_EN] = "NTSC",
        [RG_LANG_FR] = "NTSC",
    },
    {
        [RG_LANG_EN] = "PVM",
        [RG_LANG_FR] = "PVM",
    },
    {
        [RG_LANG_EN] = "Smooth",
        [RG_LANG_FR] = "Lisser",
    },
    {
        [RG_LANG_EN] = "To start, try: 1 or * or #",
        [RG_LANG_FR] = "Pour commencer, 1 ou * ou #",
    },
    {
	    [RG_LANG_EN] = "Full",
	    [RG_LANG_FR] = "Complet",
    },
    {
        [RG_LANG_EN] = "Yes",
        [RG_LANG_FR] = "Oui",
        [RG_LANG_SC] = "是",
        [RG_LANG_JP] = "です"
    },
    {
        [RG_LANG_EN] = "Select file",
        [RG_LANG_FR] = "Choisissez un fichier",
        [RG_LANG_SC] = "选择文件夹",
        [RG_LANG_JP] = "フォルダーを選択"
    },
    {
        [RG_LANG_EN] = "Off",
        [RG_LANG_FR] = "Off",
        [RG_LANG_SC] = "关",
        [RG_LANG_JP] = "関"
    },
    {
        [RG_LANG_EN] = "Language",
        [RG_LANG_FR] = "Langue",
        [RG_LANG_SC] = "语言",
        [RG_LANG_JP] = "言語"
    },
    {
        [RG_LANG_EN] = "Language changed!",
        [RG_LANG_FR] = "Changement de langue",
        [RG_LANG_SC] = "语言切换成功",
        [RG_LANG_JP] = "言語切り替えに成功しました"
    },
    {
        [RG_LANG_EN] = "For these changes to take effect you must restart your device.\nrestart now?",
        [RG_LANG_FR] = "Pour que ces changements prennent effet, vous devez redemmarer votre appareil.\nRedemmarer maintenant ?",
        [RG_LANG_SC] = "重启以应用修改。\n是否重启？",
        [RG_LANG_JP] = "変更を適用するために再起動します\n再起動しますか？"
    },
    {
        [RG_LANG_EN] = "Wi-Fi profile",
        [RG_LANG_FR] = "Profile Wi-Fi",
        [RG_LANG_SC] = "Wi-Fi 配置",
        [RG_LANG_JP] = "Wi-Fi 設定"
    },
    {
        [RG_LANG_EN] = "Language",
        [RG_LANG_FR] = "Langue",
        [RG_LANG_SC] = "语言",
        [RG_LANG_JP] = "言語"
    },
    {
        [RG_LANG_EN] = "Options",
        [RG_LANG_FR] = "Options",
        [RG_LANG_SC] = "选项",
        [RG_LANG_JP] = "選択肢"
    },
    {
        [RG_LANG_EN] = "About Retro-Go",
        [RG_LANG_FR] = "A propos de Retro-go",
        [RG_LANG_SC] = "关于 Retro-Go",
        [RG_LANG_JP] = "Retro-Goについて"
    },
    {
        [RG_LANG_EN] = "Reset all settings?",
        [RG_LANG_FR] = "Reset tous les parametres",
        [RG_LANG_SC] = "重置所有设置？",
        [RG_LANG_JP] = "すべての設定をリセットする？"
    },
    {
        [RG_LANG_EN] = "Initializing...",
        [RG_LANG_FR] = "Initialisation...",
        [RG_LANG_SC] = "正在初始化...",
        [RG_LANG_JP] = "初期化中..."
    },
    {
        [RG_LANG_EN] = "Host Game (P1)",
        [RG_LANG_FR] = "Host Game (P1)"
    },
    {
        [RG_LANG_EN] = "Find Game (P2)",
        [RG_LANG_FR] = "Find Game (P2)"
    },
    {
        [RG_LANG_EN] = "Netplay",
        [RG_LANG_FR] = "Netplay"
    },
    {
        [RG_LANG_EN] = "ROMs not identical. Continue?",
        [RG_LANG_FR] = "ROMs not identical. Continue?"
    },
    {
        [RG_LANG_EN] = "Exchanging info...",
        [RG_LANG_FR] = "Exchanging info..."
    },
    {
        [RG_LANG_EN] = "Unable to find host!",
        [RG_LANG_FR] = "Unable to find host!"
    },
    {
        [RG_LANG_EN] = "Connection failed!",
        [RG_LANG_FR] = "Connection failed!"
    },
    {
        [RG_LANG_EN] = "Waiting for peer...",
        [RG_LANG_FR] = "Waiting for peer..."
    },
    {
        [RG_LANG_EN] = "Unknown status...",
        [RG_LANG_FR] = "Unknown status..."
    },
    {
        [RG_LANG_EN] = "On",
        [RG_LANG_FR] = "On",
        [RG_LANG_SC] = "开",
        [RG_LANG_JP] = "開"
    },
    {
        [RG_LANG_EN] = "Keyboard",
        [RG_LANG_FR] = "Clavier"
    },
    {
        [RG_LANG_EN] = "Joystick",
        [RG_LANG_FR] = "Joystick"
    },
    {
        [RG_LANG_EN] = "Input",
        [RG_LANG_FR] = "Entree"
    },
    {
        [RG_LANG_EN] = "Crop",
        [RG_LANG_FR] = "Couper"
    },
    {
        [RG_LANG_EN] = "BIOS file missing!",
        [RG_LANG_FR] = "Fichier BIOS manquant",
        [RG_LANG_SC] = "缺少BIOS文件",
        [RG_LANG_JP] = "BIOSファイルが不足しています"
    },
    {
        [RG_LANG_EN] = "YM2612 audio ",
        [RG_LANG_FR] = "YM2612 audio "
    },
    {
        [RG_LANG_EN] = "SN76489 audio",
        [RG_LANG_FR] = "SN76489 audio"
    },
    {
        [RG_LANG_EN] = "Z80 emulation",
        [RG_LANG_FR] = "Emulation Z80"
    },
    {
        [RG_LANG_EN] = "Launcher options",
        [RG_LANG_FR] = "Options du lanceur",
        [RG_LANG_SC] = "前端选项",
        [RG_LANG_JP] = "ランチャーオプション"
    },
    {
        [RG_LANG_EN] = "Emulator options",
        [RG_LANG_FR] = "Options emulateur",
        [RG_LANG_SC] = "模拟器选项",
        [RG_LANG_JP] = "エミュレーターオプション"
    },
    {
        [RG_LANG_EN] = "Date",
        [RG_LANG_FR] = "Date",
        [RG_LANG_SC] = "日期",
        [RG_LANG_JP] = "日付"
    },
    {
        [RG_LANG_EN] = "Files:",
        [RG_LANG_FR] = "Fichiers:",
        [RG_LANG_SC] = "文件",
        [RG_LANG_JP] = "ファイル"
    },
    {
        [RG_LANG_EN] = "Download complete!",
        [RG_LANG_FR] = "Telechargement termine",
        [RG_LANG_SC] = "下载完成！",
        [RG_LANG_JP] = "ダウンロードが完了しました！"
    },
    {
        [RG_LANG_EN] = "Reboot to flash?",
        [RG_LANG_FR] = "Redemarrer"
    },
    {
        [RG_LANG_EN] = "Available Releases",
        [RG_LANG_FR] = "Maj disponibles",
        [RG_LANG_SC] = "可用的更新",
        [RG_LANG_JP] = "利用可能な更新"
    },
    {
        [RG_LANG_EN] = "Received empty list!",
        [RG_LANG_FR] = "Liste vide recue",
        [RG_LANG_SC] = "列表为空",
        [RG_LANG_JP] = "リストは空です"
    },
    {
        [RG_LANG_EN] = "Gamma Boost",
        [RG_LANG_FR] = "Boost Gamma"
    },
    {
        [RG_LANG_EN] = "Day",
        [RG_LANG_FR] = "Jour",
        [RG_LANG_SC] = "日",
        [RG_LANG_JP] = "日"
    },
    {
        [RG_LANG_EN] = "Hour",
        [RG_LANG_FR] = "Heure",
        [RG_LANG_SC] = "时",
        [RG_LANG_JP] = "時"
    },
    {
        [RG_LANG_EN] = "Min",
        [RG_LANG_FR] = "Min",
        [RG_LANG_SC] = "分",
        [RG_LANG_JP] = "分"
    },
    {
        [RG_LANG_EN] = "Sec",
        [RG_LANG_FR] = "Sec",
        [RG_LANG_SC] = "秒",
        [RG_LANG_JP] = "秒"
    },
    {
        [RG_LANG_EN] = "Sync",
        [RG_LANG_FR] = "Synchro",
        [RG_LANG_SC] = "同步",
        [RG_LANG_JP] = "同期"
    },
    {
        [RG_LANG_EN] = "RTC config",
        [RG_LANG_FR] = "Congig RTC",
        [RG_LANG_SC] = "RTC 设置",
        [RG_LANG_JP] = "RTC 設定"
    },
    {
        [RG_LANG_EN] = "Palette",
        [RG_LANG_FR] = "Palette",
        [RG_LANG_SC] = "调色板",
        [RG_LANG_JP] = "パレット"
    },
    {
        [RG_LANG_EN] = "RTC config",
        [RG_LANG_FR] = "Congig RTC",
        [RG_LANG_SC] = "RTC 设置",
        [RG_LANG_JP] = "RTC 設定"
    },
    {
        [RG_LANG_EN] = "SRAM autosave",
        [RG_LANG_FR] = "Sauvegarde auto SRAM",
        [RG_LANG_SC] = "SRAM 自动保存",
        [RG_LANG_JP] = "SRAM 自動保存"
    },
    {
        [RG_LANG_EN] = "Enable BIOS",
        [RG_LANG_FR] = "Activer BIOS",
        [RG_LANG_SC] = "启用 BIOS",
        [RG_LANG_JP] = "BIOSを起動する"
    },
    {
        [RG_LANG_EN] = "Name",
        [RG_LANG_FR] = "Nom",
        [RG_LANG_SC] = "名称",
        [RG_LANG_JP] = "名称"
    },
    {
        [RG_LANG_EN] = "Artist",
        [RG_LANG_FR] = "Artiste",
        [RG_LANG_SC] = "艺术家",
        [RG_LANG_JP] = "アーティスト"
    },
    {
        [RG_LANG_EN] = "Copyright",
        [RG_LANG_FR] = "Copyright",
        [RG_LANG_SC] = "版权",
        [RG_LANG_JP] = "著作権"
    },
    {
        [RG_LANG_EN] = "Playing",
        [RG_LANG_FR] = "Playing"
    },
    {
        [RG_LANG_EN] = "Palette",
        [RG_LANG_FR] = "Palette",
        [RG_LANG_SC] = "调色板",
        [RG_LANG_JP] = "パレット"
    },
    {
        [RG_LANG_EN] = "Overscan",
        [RG_LANG_FR] = "Overscan"
    },
    {
        [RG_LANG_EN] = "Crop sides",
        [RG_LANG_FR] = "Couper les cotes"
    },
    {
        [RG_LANG_EN] = "Sprite limit",
        [RG_LANG_FR] = "Limite de sprite"
    },
    {
        [RG_LANG_EN] = "Overscan",
        [RG_LANG_FR] = "Overscan"
    },
    {
        [RG_LANG_EN] = "Palette",
        [RG_LANG_FR] = "Palette",
        [RG_LANG_SC] = "调色板",
        [RG_LANG_JP] = "パレット"
    },
    {
        [RG_LANG_EN] = "Profile",
        [RG_LANG_FR] = "Profile",
        [RG_LANG_SC] = "配置",
        [RG_LANG_JP] = "配置"
    },
    {
        [RG_LANG_EN] = "Controls",
        [RG_LANG_FR] = "Controles"
    },
    {
        [RG_LANG_EN] = "Audio enable",
        [RG_LANG_FR] = "Activer audio"
    },
    {
        [RG_LANG_EN] = "Audio filter",
        [RG_LANG_FR] = "Filtre audio"
    },
    // rg_gui.c
    {
        [RG_LANG_EN] = "Default",
        [RG_LANG_FR] = "Default",
        [RG_LANG_SC] = "默认",
        [RG_LANG_JP] = "デフォルト"
    },
    {
        [RG_LANG_EN] = "Theme",
        [RG_LANG_FR] = "Themes",
        [RG_LANG_SC] = "主题",
        [RG_LANG_JP] = "テーマ"
    },
    {
        [RG_LANG_EN] = "List empty",
        [RG_LANG_FR] = "La liste est vide.",
        [RG_LANG_SC] = "列表为空",
        [RG_LANG_JP] = "リストは空です"
    },
    {
        [RG_LANG_EN] = "Folder is empty.",
        [RG_LANG_FR] = "Le dossier est vide.",
        [RG_LANG_SC] = "文件夹为空",
        [RG_LANG_JP] = "フォルダーは空です"
    },
    {
        [RG_LANG_EN] = "No",
        [RG_LANG_FR] = "Non",
        [RG_LANG_SC] = "否",
        [RG_LANG_JP] = "いいえ"
    },
    {
        [RG_LANG_EN] = "OK",
        [RG_LANG_FR] = "OK",
        [RG_LANG_SC] = "确认",
        [RG_LANG_JP] = "はい"
    },
    {
        [RG_LANG_EN] = "On",
        [RG_LANG_FR] = "On",
        [RG_LANG_SC] = "开",
        [RG_LANG_JP] = "開"
    },
    {
        [RG_LANG_EN] = "Off",
        [RG_LANG_FR] = "Off",
        [RG_LANG_SC] = "关",
        [RG_LANG_JP] = "関"
    },
    {
        [RG_LANG_EN] = "Horiz",
        [RG_LANG_FR] = "Horiz",
        [RG_LANG_SC] = "水平",
        [RG_LANG_JP] = "水平"
    },
    {
        [RG_LANG_EN] = "Vert",
        [RG_LANG_FR] = "Vert ",
        [RG_LANG_SC] = "垂直",
        [RG_LANG_JP] = "垂直"
    },
    {
        [RG_LANG_EN] = "Both",
        [RG_LANG_FR] = "Tout",
        [RG_LANG_SC] = "同时",
        [RG_LANG_JP] = "同時に"
    },
    {
        [RG_LANG_EN] = "Fit",
        [RG_LANG_FR] = "Ajuster",
        [RG_LANG_SC] = "比例",
        [RG_LANG_JP] = "比率"
    },
    {
        [RG_LANG_EN] = "Full ",
        [RG_LANG_FR] = "Remplir ",
        [RG_LANG_SC] = "填充",
        [RG_LANG_JP] = "充填"
    },
    {
        [RG_LANG_EN] = "Zoom",
        [RG_LANG_FR] = "Zoomer",
        [RG_LANG_SC] = "缩放",
        [RG_LANG_JP] = "ズーム"
    },

    // Led options
    {
        [RG_LANG_EN] = "LED options",
        [RG_LANG_FR] = "Options LED",
        [RG_LANG_SC] = "LED 选项",
        [RG_LANG_JP] = "LEDオプション"
    },
    {
        [RG_LANG_EN] = "System activity",
        [RG_LANG_FR] = "Activite systeme",
        [RG_LANG_SC] = "系统指示灯",
        [RG_LANG_JP] = "システムインジケーターライト"
    },
    {
        [RG_LANG_EN] = "Disk activity",
        [RG_LANG_FR] = "Activite stockage",
        [RG_LANG_SC] = "磁盘指示灯",
        [RG_LANG_JP] = "ディスクインジケーター"
    },
    {
        [RG_LANG_EN] = "Low battery",
        [RG_LANG_FR] = "Battery basse",
        [RG_LANG_SC] = "电池电量低",
        [RG_LANG_JP] = "バッテリー残量が少ない"
    },
    {
        [RG_LANG_EN] = "Default",
        [RG_LANG_FR] = "Default",
        [RG_LANG_SC] = "默认",
        [RG_LANG_JP] = "デフォルト"
    },
    {
        [RG_LANG_EN] = "none",
        [RG_LANG_FR] = "Aucun",
        [RG_LANG_SC] = "无",
        [RG_LANG_JP] = "無"
    },
    {
        [RG_LANG_EN] = "<None>",
        [RG_LANG_FR] = "<Aucun>",
        [RG_LANG_SC] = "<无>",
        [RG_LANG_JP] = "<無>"
    },

    // Wifi
    {
        [RG_LANG_EN] = "Not connected",
        [RG_LANG_FR] = "Non connecte",
        [RG_LANG_SC] = "未连接",
        [RG_LANG_JP] = "未接続"
    },
    {
        [RG_LANG_EN] = "Connecting...",
        [RG_LANG_FR] = "Connection...",
        [RG_LANG_SC] = "正在连接...",
        [RG_LANG_JP] = "接続中..."
    },
    {
        [RG_LANG_EN] = "Disconnecting...",
        [RG_LANG_FR] = "Disconnection...",
        [RG_LANG_SC] = "正在断连...",
        [RG_LANG_JP] = "切断中..."
    },
    {
        [RG_LANG_EN] = "(empty)",
        [RG_LANG_FR] = "(vide)",
        [RG_LANG_SC] = "(空)",
        [RG_LANG_JP] = "(空)"
    },
    {
        [RG_LANG_EN] = "Wi-Fi AP",
        [RG_LANG_FR] = "Wi-Fi AP"
    },
    {
        [RG_LANG_EN] = "Start access point?\n\nSSID: retro-go\nPassword: retro-go\n\nBrowse: http://192.168.4.1/",
        [RG_LANG_FR] = "Demarrer point d'acces?\n\nSSID: retro-go\nPassword: retro-go\n\nAdresse: http://192.168.4.1/",
        [RG_LANG_SC] = "启动热点？\n\nSSID: retro-go\nPassword: retro-go\n\nBrowse: http://192.168.4.1/",
        [RG_LANG_JP] = "アクセスポイントを開始しますか？\n\nSSID: retro-go\nPassword: retro-go\n\nBrowse: http://192.168.4.1/"
    },
    {
        [RG_LANG_EN] = "Wi-Fi enable",
        [RG_LANG_FR] = "Activer Wi-Fi",
        [RG_LANG_SC] = "启用 Wi-Fi",
        [RG_LANG_JP] = "Wi-Fiを有効にする"
    },
    {
        [RG_LANG_EN] = "Wi-Fi access point",
        [RG_LANG_FR] = "Point d'acces WiFi",
        [RG_LANG_SC] = "Wi-Fi 接入点",
        [RG_LANG_JP] = "Wi-Fiアクセスポイント"
    },
    {
        [RG_LANG_EN] = "Network",
        [RG_LANG_FR] = "Reseau",
        [RG_LANG_SC] = "网络",
        [RG_LANG_JP] = "ネットワーク"
    },
    {
        [RG_LANG_EN] = "IP address",
        [RG_LANG_FR] = "Adresse IP",
        [RG_LANG_SC] = "IP 地址",
        [RG_LANG_JP] = "IPアドレス"
    },

    // retro-go settings
    {
        [RG_LANG_EN] = "Brightness",
        [RG_LANG_FR] = "Luminosite",
        [RG_LANG_SC] = "亮度",
        [RG_LANG_JP] = "明度"
    },
    {
        [RG_LANG_EN] = "Volume",
        [RG_LANG_FR] = "Volume",
        [RG_LANG_SC] = "音量",
        [RG_LANG_JP] = "音量"
    },
    {
        [RG_LANG_EN] = "Audio out",
        [RG_LANG_FR] = "Sortie audio",
        [RG_LANG_SC] = "音频输出",
        [RG_LANG_JP] = "音声出力"
    },
    {
        [RG_LANG_EN] = "Font type",
        [RG_LANG_FR] = "Police",
        [RG_LANG_SC] = "字体",
        [RG_LANG_JP] = "フォント"
    },
    {
        [RG_LANG_EN] = "Theme",
        [RG_LANG_FR] = "Theme",
        [RG_LANG_SC] = "主题",
        [RG_LANG_JP] = "テーマ"
    },
    {
        [RG_LANG_EN] = "Show clock",
        [RG_LANG_FR] = "Horloge",
        [RG_LANG_SC] = "显示时钟",
        [RG_LANG_JP] = "時計を表示する"
    },
    {
        [RG_LANG_EN] = "Timezone",
        [RG_LANG_FR] = "Fuseau",
        [RG_LANG_SC] = "时区",
        [RG_LANG_JP] = "タイムゾーン"
    },
    {
        [RG_LANG_EN] = "Wi-Fi options",
        [RG_LANG_FR] = "Options Wi-Fi",
        [RG_LANG_SC] = "Wi-Fi 选项",
        [RG_LANG_JP] = "Wi-Fiオプション"
    },

    // app dettings
    {
        [RG_LANG_EN] = "Scaling",
        [RG_LANG_FR] = "Format",
        [RG_LANG_SC] = "缩放",
        [RG_LANG_JP] = "ズーム"
    },
    {
        [RG_LANG_EN] = "Factor",
        [RG_LANG_FR] = "Factor"
    },
    {
        [RG_LANG_EN] = "Filter",
        [RG_LANG_FR] = "Filtre",
        [RG_LANG_SC] = "滤镜",
        [RG_LANG_JP] = "フィルター"
    },
    {
        [RG_LANG_EN] = "Border",
        [RG_LANG_FR] = "Bordure",
        [RG_LANG_SC] = "边框",
        [RG_LANG_JP] = "境界"
    },
    {
        [RG_LANG_EN] = "Speed",
        [RG_LANG_FR] = "Vitesse",
        [RG_LANG_SC] = "速率",
        [RG_LANG_JP] = "速度"
    },

    // about menu
    {
        [RG_LANG_EN] = "Version",
        [RG_LANG_FR] = "Version",
        [RG_LANG_SC] = "编译版本",
        [RG_LANG_JP] = "コンパイルされたバージョン"
    },
    {
        [RG_LANG_EN] = "Date",
        [RG_LANG_FR] = "Date",
        [RG_LANG_SC] = "编译时间",
        [RG_LANG_JP] = "コンパイル時間"
    },
    {
        [RG_LANG_EN] = "Target",
        [RG_LANG_FR] = "Cible",
        [RG_LANG_SC] = "目标设备",
        [RG_LANG_JP] = "目標デバイス"
    },
    {
        [RG_LANG_EN] = "Website",
        [RG_LANG_FR] = "Site Web",
        [RG_LANG_SC] = "网址",
        [RG_LANG_JP] = "ウェブサイト"
    },
    {
        [RG_LANG_EN] = "Options",
        [RG_LANG_FR] = "Options",
        [RG_LANG_SC] = "选项",
        [RG_LANG_JP] = "選択肢"
    },
    {
        [RG_LANG_EN] = "View credits",
        [RG_LANG_FR] = "Credits",
        [RG_LANG_SC] = "开发者",
        [RG_LANG_JP] = "開発者"
    },
    {
        [RG_LANG_EN] = "Debug menu",
        [RG_LANG_FR] = "Menu debug",
        [RG_LANG_SC] = "Debug 菜单",
        [RG_LANG_JP] = "デバッグメニュー"
    },
    {
        [RG_LANG_EN] = "Reset settings",
        [RG_LANG_FR] = "Reset parametres",
        [RG_LANG_SC] = "重置所有设置",
        [RG_LANG_JP] = "すべての設定をリセットする"
    },

    // save slot
    {
        [RG_LANG_EN] = "Slot 0",
        [RG_LANG_FR] = "Emplacement 0",
        [RG_LANG_SC] = "存档 0",
        [RG_LANG_JP] = "アーカイブ 0"
    },
    {
        [RG_LANG_EN] = "Slot 1",
        [RG_LANG_FR] = "Emplacement 1",
        [RG_LANG_SC] = "存档 1",
        [RG_LANG_JP] = "アーカイブ 1"
    },
    {
        [RG_LANG_EN] = "Slot 2",
        [RG_LANG_FR] = "Emplacement 2",
        [RG_LANG_SC] = "存档 2",
        [RG_LANG_JP] = "アーカイブ 2"
    },
    {
        [RG_LANG_EN] = "Slot 3",
        [RG_LANG_FR] = "Emplacement 3",
        [RG_LANG_SC] = "存档 3",
        [RG_LANG_JP] = "アーカイブ 3"
    },

    // game menu
    {
        [RG_LANG_EN] = "Save & Continue",
        [RG_LANG_FR] = "Sauver et continuer",
        [RG_LANG_SC] = "保存并继续",
        [RG_LANG_JP] = "保存して続ける"
    },
    {
        [RG_LANG_EN] = "Save & Quit",
        [RG_LANG_FR] = "Sauver et quitter",
        [RG_LANG_SC] = "保存并退出",
        [RG_LANG_JP] = "保存して終了"
    },
    {
        [RG_LANG_EN] = "Load game",
        [RG_LANG_FR] = "Charger partie",
        [RG_LANG_SC] = "读取",
        [RG_LANG_JP] = "読み取り"
    },
    {
        [RG_LANG_EN] = "Reset",
        [RG_LANG_FR] = "Reset",
        [RG_LANG_SC] = "重置",
        [RG_LANG_JP] = "リセット"
    },
    {
        [RG_LANG_EN] = "Netplay",
        [RG_LANG_FR] = "Netplay"
    },
    {
        [RG_LANG_EN] = "About",
        [RG_LANG_FR] = "Infos",
        [RG_LANG_SC] = "关于",
        [RG_LANG_JP] = "について"
    },
    {
        [RG_LANG_EN] = "Quit",
        [RG_LANG_FR] = "Quitter",
        [RG_LANG_SC] = "退出",
        [RG_LANG_JP] = "退出する"
    },
    {
        [RG_LANG_EN] = "Soft reset",
        [RG_LANG_FR] = "Soft reset",
        [RG_LANG_SC] = "软件重置",
        [RG_LANG_JP] = "ソフトウェアのリセット"
    },
    {
        [RG_LANG_EN] = "Hard reset",
        [RG_LANG_FR] = "Hard reset",
        [RG_LANG_SC] = "硬件重置",
        [RG_LANG_JP] = "ハードウェアのリセット"
    },

    {
        [RG_LANG_EN] = "Reset Emulation?",
        [RG_LANG_FR] = "Reset Emulation?",
        [RG_LANG_SC] = "重置模拟器",
        [RG_LANG_JP] = "エミュレーターをリセットする"
    },
    {
        [RG_LANG_EN] = "Save",
        [RG_LANG_FR] = "Sauver",
        [RG_LANG_SC] = "保存",
        [RG_LANG_JP] = "保存"
    },
    {
        [RG_LANG_EN] = "Load",
        [RG_LANG_FR] = "Charger",
        [RG_LANG_SC] = "读取",
        [RG_LANG_JP] = "読み取り"
    },
    // end of rg_gui.c


    // main.c
    {
        [RG_LANG_EN] = "Show",
        [RG_LANG_FR] = "Montrer",
        [RG_LANG_SC] = "显示",
        [RG_LANG_JP] = "表示"
    },
    {
        [RG_LANG_EN] = "Hide",
        [RG_LANG_FR] = "Cacher",
        [RG_LANG_SC] = "隐藏",
        [RG_LANG_JP] = "隠れる"
    },

    // scroll modes
    {
        [RG_LANG_EN] = "Center",
        [RG_LANG_FR] = "centrer",
        [RG_LANG_SC] = "居中",
        [RG_LANG_JP] = "居中"
    },
    {
        [RG_LANG_EN] = "Paging",
        [RG_LANG_FR] = "Paging",
        [RG_LANG_SC] = "分页",
        [RG_LANG_JP] = "ページ分割"
    },

    // start screen
    {
        [RG_LANG_EN] = "Auto",
        [RG_LANG_FR] = "Auto",
        [RG_LANG_SC] = "自动",
        [RG_LANG_JP] = "自動"
    },
    {
        [RG_LANG_EN] = "Carousel",
        [RG_LANG_FR] = "Carousel",
        [RG_LANG_SC] = "首页",
        [RG_LANG_JP] = "ホームページ"
    },
    {
        [RG_LANG_EN] = "Browser",
        [RG_LANG_FR] = "Browser",
        [RG_LANG_SC] = "列表",
        [RG_LANG_JP] = "リスト"
    },

    // preview
    {
        [RG_LANG_EN] = "None",
        [RG_LANG_FR] = "Aucun",
        [RG_LANG_SC] = "无",
        [RG_LANG_JP] = "無"
    },
    {
        [RG_LANG_EN] = "Cover,Save",
        [RG_LANG_FR] = "Cover,Save",
        [RG_LANG_SC] = "封面或存档",
        [RG_LANG_JP] = "カバーまたはアーカイブ"
    },
    {
        [RG_LANG_EN] = "Save,Cover",
        [RG_LANG_FR] = "Save,Cover",
        [RG_LANG_SC] = "存档或封面",
        [RG_LANG_JP] = "アーカイブまたはカバー"
    },
    {
        [RG_LANG_EN] = "Cover only",
        [RG_LANG_FR] = "Cover only",
        [RG_LANG_SC] = "只显示封面",
        [RG_LANG_JP] = "表紙のみ表示"
    },
    {
        [RG_LANG_EN] = "Save only",
        [RG_LANG_FR] = "Save only",
        [RG_LANG_SC] = "只显示存档",
        [RG_LANG_JP] = "アーカイブのみ表示する"
    },

    // startup app
    {
        [RG_LANG_EN] = "Last game",
        [RG_LANG_FR] = "Dernier jeu",
        [RG_LANG_SC] = "最近的游戏",
        [RG_LANG_JP] = "最近のゲーム"
    },
    {
        [RG_LANG_EN] = "Launcher",
        [RG_LANG_FR] = "Launcher",
        [RG_LANG_SC] = "前端",
        [RG_LANG_JP] = "ランチャー"
    },

    // launcher options
    {
        [RG_LANG_EN] = "Color theme",
        [RG_LANG_FR] = "Couleurs",
        [RG_LANG_SC] = "配色",
        [RG_LANG_JP] = "配色"
    },
    {
        [RG_LANG_EN] = "Preview",
        [RG_LANG_FR] = "Apercu",
        [RG_LANG_SC] = "预览图",
        [RG_LANG_JP] = "プレビュー画像"
    },
    {
        [RG_LANG_EN] = "Scroll mode",
        [RG_LANG_FR] = "Mode defilement",
        [RG_LANG_SC] = "滚动模式",
        [RG_LANG_JP] = "ロールモード"
    },
    {
        [RG_LANG_EN] = "Start screen",
        [RG_LANG_FR] = "Ecran demarrage",
        [RG_LANG_SC] = "启动方式",
        [RG_LANG_JP] = "起動方式"
    },
    {
        [RG_LANG_EN] = "Hide tabs",
        [RG_LANG_FR] = "Cacher onglet",
        [RG_LANG_SC] = "模拟器选项",
        [RG_LANG_JP] = "エミュレーターオプション"
    },
    {
        [RG_LANG_EN] = "File server",
        [RG_LANG_FR] = "Serveur fichier",
        [RG_LANG_SC] = "文件服务器",
        [RG_LANG_JP] = "ファイルサーバー"
    },
    {
        [RG_LANG_EN] = "Startup app",
        [RG_LANG_FR] = "App demarrage",
        [RG_LANG_SC] = "启动时运行",
        [RG_LANG_JP] = "起動時に実行する"
    },
    {
        [RG_LANG_EN] = "Build CRC cache",
        [RG_LANG_FR] = "Build CRC cache",
        [RG_LANG_SC] = "构建CRC缓存",
        [RG_LANG_JP] = "CRCキャッシュを構築する"
    },
    {
        [RG_LANG_EN] = "Check for updates",
        [RG_LANG_FR] = "Check for updates",
        [RG_LANG_SC] = "检查更新",
        [RG_LANG_JP] = "更新をチェックする"
    },
    {
        [RG_LANG_EN] = "HTTP Server Busy...",
        [RG_LANG_FR] = "Server Web ...",
        [RG_LANG_SC] = "HTTP 服务器无响应",
        [RG_LANG_JP] = "HTTPサーバーが応答していません"
    },
    {
        [RG_LANG_EN] = "SD Card Error",
        [RG_LANG_FR] = "Erreur carte SD",
        [RG_LANG_SC] = "SD卡 错误",
        [RG_LANG_JP] = "SDカード エラー"
    },
    {
        [RG_LANG_EN] = "Storage mount failed.\nMake sure the card is FAT32.",
        [RG_LANG_FR] = "Erreur montage SD.\nVerifiez que la carte est en FAT32.",
        [RG_LANG_SC] = "挂载SD卡失败。\n请检查SD卡是否为FAT32格式。",
        [RG_LANG_JP] = "SDカードのマウントに失敗しました。\nSDカードがFAT32フォーマットであるか確認してください"
    },
    // end of main.c


    // applications.c
    {
        [RG_LANG_EN] = "Scanning %s %d/%d",
        [RG_LANG_FR] = "Scan %s %d/%d",
        [RG_LANG_SC] = "正在检索 %s %d/%d",
        [RG_LANG_JP] = "検索中です %s %d/%d"
    },
    // message when no rom
    {
        [RG_LANG_EN] = "Welcome to Retro-Go!",
        [RG_LANG_FR] = "Bienvenue sur Retro-Go!",
        [RG_LANG_SC] = "欢迎使用Retro-Go",
        [RG_LANG_JP] = "ようこそご利用ください Retro-Go"
    },
    {
        [RG_LANG_EN] = "Place roms in folder: %s",
        [RG_LANG_FR] = "Placer les ROMS dans le dossier: %s",
        [RG_LANG_SC] = "请将ROMS放至文件夹:%s",
        [RG_LANG_JP] = "ROMSをフォルダに入れてください:%s"
    },
    {
        [RG_LANG_EN] = "With file extension: %s",
        [RG_LANG_FR] = "Avec l'extension: %s",
        [RG_LANG_SC] = "支持的扩展名:%s",
        [RG_LANG_JP] = "サポートされている拡張子:%s"
    },
    {
        [RG_LANG_EN] = "You can hide this tab in the menu",
        [RG_LANG_FR] = "Vous pouvez cacher cet onglet dans le menu",
        [RG_LANG_SC] = "在菜单里可以隐藏这个模拟器",
        [RG_LANG_JP] = "メニューでこのエミュレーターを隠すことができます"
    },
    {
        [RG_LANG_EN] = "You have no %s games",
        [RG_LANG_FR] = "Vous n'avez pas de jeux %s",
        [RG_LANG_SC] = "你没有 %s 游戏",
        [RG_LANG_JP] = "あなたは %s ゲームを持っていません"
    },
    {
        [RG_LANG_EN] = "File not found",
        [RG_LANG_FR] = "Fichier non present",
        [RG_LANG_SC] = "未发现文件",
        [RG_LANG_JP] = "ファイルが見つかりませんでした"
    },

    // rom options
    {
        [RG_LANG_EN] = "Name",
        [RG_LANG_FR] = "Nom",
        [RG_LANG_SC] = "名称",
        [RG_LANG_JP] = "名称"
    },
    {
        [RG_LANG_EN] = "Folder",
        [RG_LANG_FR] = "Dossier",
        [RG_LANG_SC] = "文件夹",
        [RG_LANG_JP] = "フォルダー"
    },
    {
        [RG_LANG_EN] = "Size",
        [RG_LANG_FR] = "Taille",
        [RG_LANG_SC] = "文件大小",
        [RG_LANG_JP] = "ファイルサイズ"
    },
    {
        [RG_LANG_EN] = "CRC32",
        [RG_LANG_FR] = "CRC32"
    },
    {
        [RG_LANG_EN] = "Delete file",
        [RG_LANG_FR] = "Supprimer fichier",
        [RG_LANG_SC] = "删除文件",
        [RG_LANG_JP] = "ファイルを削除する"
    },
    {
        [RG_LANG_EN] = "Close",
        [RG_LANG_FR] = "Fermer",
        [RG_LANG_SC] = "关闭",
        [RG_LANG_JP] = "閉じる"
    },
    {
        [RG_LANG_EN] = "File properties",
        [RG_LANG_FR] = "Propriete",
        [RG_LANG_SC] = "文件属性",
        [RG_LANG_JP] = "ファイル属性"
    },
    {
        [RG_LANG_EN] = "Delete selected file?",
        [RG_LANG_FR] = "Supprimer fichier?",
        [RG_LANG_SC] = "确认删除文件？",
        [RG_LANG_JP] = "ファイルを削除してよろしいですか？"
    },


    // in-game menu
    {
        [RG_LANG_EN] = "Resume game",
        [RG_LANG_FR] = "Reprendre partie",
        [RG_LANG_SC] = "继续游戏",
        [RG_LANG_JP] = "ゲームを続ける"
    },
    {
        [RG_LANG_EN] = "New game",
        [RG_LANG_FR] = "Nouvelle partie",
        [RG_LANG_SC] = "新游戏",
        [RG_LANG_JP] = "新しいゲーム"
    },
    {
        [RG_LANG_EN] = "Del favorite",
        [RG_LANG_FR] = "supp favori",
        [RG_LANG_SC] = "取消收藏",
        [RG_LANG_JP] = "お気に入りを解除"
    },
    {
        [RG_LANG_EN] = "Add favorite",
        [RG_LANG_FR] = "Ajouter favori",
        [RG_LANG_SC] = "添加收藏",
        [RG_LANG_JP] = "お気に入りに追加"
    },
    {
        [RG_LANG_EN] = "Delete save",
        [RG_LANG_FR] = "Supp sauvegarde",
        [RG_LANG_SC] = "删除存档",
        [RG_LANG_JP] = "アーカイブを削除する"
    },
    {
        [RG_LANG_EN] = "Properties",
        [RG_LANG_FR] = "Proprietes",
        [RG_LANG_SC] = "属性",
        [RG_LANG_JP] = "属性"
    },
    {
        [RG_LANG_EN] = "Resume",
        [RG_LANG_FR] = "Reprendre",
        [RG_LANG_SC] = "继续",
        [RG_LANG_JP] = "続けて"
    },
    {
        [RG_LANG_EN] = "Delete save?",
        [RG_LANG_FR] = "Supp sauvegarde?",
        [RG_LANG_SC] = "删除存档？",
        [RG_LANG_JP] = "アーカイブを削除しますか？"
    },
    {
        [RG_LANG_EN] = "Delete sram file?",
        [RG_LANG_FR] = "Supp fichier SRAM?",
        [RG_LANG_SC] = "删除SRAM存档?",
        [RG_LANG_JP] = "SRAMの保存を削除する"
    },
    // end of applications.c


    // rg_system.c
    {
        [RG_LANG_EN] = "App unresponsive... Hold MENU to quit!",
        [RG_LANG_FR] = "Plantage... MENU pour quitter"
    },
    {
        [RG_LANG_EN] = "Reset all settings",
        [RG_LANG_FR] = "Reset parametres"
    },
    {
        [RG_LANG_EN] = "Reboot to factory ",
        [RG_LANG_FR] = "Redemarrer usine"
    },
    {
        [RG_LANG_EN] = "Reboot to launcher",
        [RG_LANG_FR] = "Relancer launcher"
    },
    {
        [RG_LANG_EN] = "Recovery mode",
        [RG_LANG_FR] = "Mode de recuperation"
    },
    {
        [RG_LANG_EN] = "System Panic!",
        [RG_LANG_FR] = "Plantage systeme!"
    },
    {
        [RG_LANG_EN] = "Save failed",
        [RG_LANG_FR] = "Erreur sauvegarde"
    },
    // end of rg_system.c
};
