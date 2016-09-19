/*
 *  Copyright (C) 2014 Huawei Technologies Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#define JL_POWERKEY_PRESS                                  "JLOG0"
#define JL_USBCHARGING_START                               "JLOG1"
#define JL_USBCHARGING_END                                 "JLOG2"
#define JL_NEWRINGING_CONNECTION                           "JLOG3"
#define JL_INCOMINGCALL_RINGING                            "JLOG4"
#define JL_PMS_WAKEFULNESS_ASLEEP                          "JLOG5"
#define JL_PMS_WAKEFULNESS_DREAMING                        "JLOG6"
#define JL_PMS_WAKEFULNESS_NAPPING                         "JLOG7"
#define JL_PMS_WAKEUP_FINISHED                             "JLOG8"
#define JL_POWERKEY_RELEASE                                "JLOG9"
#define JL_KERNEL_LCD_OPEN                                 "JLOG10"
#define JL_KERNEL_LCD_SUSPEND                              "JLOG11"
#define JL_KERNEL_LCD_POWER_ON                             "JLOG12"
#define JL_KERNEL_LCD_POWER_OFF                            "JLOG13"
#define JL_KERNEL_PM_SUSPEND_WAKEUP                        "JLOG14"
#define JL_GO_TO_SLEEP_REASON_USER                         "JLOG15"
#define JL_KERNEL_PM_SUSPEND_SLEEP                         "JLOG16"
#define JL_KERNEL_PM_DEEPSLEEP_WAKEUP                      "JLOG17"
#define JL_KERNEL_LCD_RESUME                               "JLOG18"
#define JL_SYSPROC_INIT_POWERON_START                      "JLOG19"
#define JL_SYSPROC_INIT_POWERON_END                        "JLOG20"
#define JL_SERVICEMANAGER_POWERON_START                    "JLOG21"
#define JL_SERVICEMANAGER_STARTUP                          "JLOG22"
#define JL_START_SYSTEMSERVER                              "JLOG23"
#define JL_LAUNCHER_STARTUP                                "JLOG24"
#define JL_ZYGOTE_START                                    "JLOG25"
#define JL_BOOT_PROGRESS_PRELOAD_START                     "JLOG26"
#define JL_BOOT_PROGRESS_PRELOAD_END                       "JLOG27"
#define JL_BOOT_PROGRESS_SYSTEM_RUN                        "JLOG28"
#define JL_BOOT_PROGRESS_PMS_START                         "JLOG29"
#define JL_BOOT_PROGRESS_PMS_SYSTEM_SCAN_START             "JLOG30"
#define JL_BOOT_PROGRESS_PMS_DATA_SCAN_START               "JLOG31"
#define JL_BOOT_PROGRESS_PMS_SCAN_END                      "JLOG32"
#define JL_BOOT_PROGRESS_PMS_READY                         "JLOG33"
#define JL_BOOT_PROGRESS_AMS_READY                         "JLOG34"
#define JL_BOOT_PROGRESS_ENABLE_SCREEN                     "JLOG35"
#define JL_PROXIMITY_SENSOR_CLOSE                          "JLOG36"
#define JL_PROXIMITY_SENSOR_OPEN                           "JLOG37"
/*< Add performance log Wuzhen/w00213434 20140418 begin */
#define JL_START_BROWSER_ONCREATE_START                    "JLOG10000"
#define JL_START_BROWSER_ONCREATE_END                      "JLOG10001" 
#define JL_START_BROWSER_ACTIVITY_ONCREATE_START           "JLOG10002"
#define JL_START_BROWSER_ACTIVITY_ONCREATE_END             "JLOG10003"
#define JL_START_BROWSER_ACTIVITY_CREATE_CONTROLOR_START   "JLOG10004"
#define JL_START_BROWSER_ACTIVITY_CREATE_CONTROLOR_END     "JLOG10005"
#define JL_START_BROWSER_ACTIVITY_ONRESUME_START           "JLOG10006"
#define JL_START_BROWSER_ACTIVITY_ONRESUME_END             "JLOG10007"
#define JL_START_BROWSER_CONTROLOR_START_START             "JLOG10008"
#define JL_START_BROWSER_CONTROLOR_START_END               "JLOG10009"
#define JL_START_BROWSER_CONTROLOR_DOSTART_START           "JLOG100010"
#define JL_START_BROWSER_CONTROLOR_DOSTART_END             "JLOG100011"
#define JL_START_BROWSER_CONTROLOR_ONPRELOGIN_FINISH_START "JLOG100012"
#define JL_START_BROWSER_CONTROLOR_ONPRELOGIN_FINISH_END   "JLOG100013"
#define JL_START_BROWSER_OPEN_HOMEPAGE_START               "JLOG100014"
#define JL_START_BROWSER_OPEN_HOMEPAGE_END                 "JLOG100015"
#define JL_BROWSER_WEBVIEW_LOADURL                         "JLOG10016"
#define JL_BROWSER_WEBKIT_WEBCOREFRAMEBRIDGE_LOADURL       "JLOG10017" 
#define JL_BROWSER_WEBKIT_FRAMELOADER_LOAD                 "JLOG10018" 
#define JL_BROWSER_WEBKIT_HTMLPARSER_BEGIN                 "JLOG10019"

#define JL_BOOT_ANDROID_START_TIME                         "JLOG12001"
#define JL_DISPLAY_RENDER_EXECUTE_TRACK                    "JLOG12005"
#define JL_BOOT_ZYGOTE_PRELOAD_END_TIME                    "JLOG12008"
#define JL_BOOT_VM_CREATE_TIME                             "JLOG12009"
#define JL_BOOT_AMS_READY_TIME                             "JLOG12010"
#define JL_BOOT_AMS_START_LAUNCHER_TIME                    "JLOG12011"
#define JL_BOOT_PRIV_APP_SCAN_TIME                         "JLOG12012"
#define JL_BOOT_SYSTEM_APP_SCAN_TIME                       "JLOG12013"
#define JL_BOOT_DEL_APP_SCAN_TIME                          "JLOG12014"
#define JL_BOOT_INSTALL_APP_SCAN_TIME                      "JLOG12015"
#define JL_SENSOR_CHANGE_TIME                              "JLOG12016"
#define JL_BOOT_ACTIVITY_MANAGER_START_TIME                "JLOG12017"
#define JL_BOOT_PACKAGE_MANAGER_END_TIME                   "JLOG12018"
#define JL_BOOT_START_SERVICE_END_TIME                     "JLOG12019"
#define JL_BOOT_END_TIME                                   "JLOG12020"
#define JL_DISPLAY_COMPSITION_SLOW_NUM                     "JLOG12021"
#define JL_BOOT_SEARCH_NETWORK_CDMA_END_TIME               "JLOG12022"
#define JL_BOOT_SEARCH_NETWORK_GSM_END_TIME                "JLOG12023"
#define JL_BOOT_SEARCH_NETWORK_START_TIME                  "JLOG12024"
#define JL_DISPLAY_FRAME_BUFFER_COMMIT_SLOW_TIME           "JLOG12025"


#define JL_SURFACECONTROL_UNBLANKDISPLAY                   "JLOG14025"
#define JL_SURFACECONTROL_BLANKDISPLAY                     "JLOG14026"
#define JL_OVERSCROOL_FLING_RATE                           "JLOG14027"
#define JL_PWIND_KEYCHECKED_TOWAKEUP                       "JLOG14028"
#define JL_PWIND_KEYCHECKED_TOSLEEP                        "JLOG14029"
#define JL_CHECKED_ORIENTATION_CHANGED_START               "JLOG14030"
#define JL_PROCESSKEYEND_TIMOUT                            "JLOG14031"
#define JL_PMS_WAKEUP_START                                "JLOG14032"
#define JL_PMS_GOSLEEP_START                               "JLOG14033"
#define JL_SHUTDOWN_ENTERSHUTDOWN                          "JLOG14034"
#define JL_SHUTDOWN_ENTER_REBOOT                           "JLOG14035"
#define JL_SHUTDOWN_SEND_BROADCAST_START                   "JLOG14036"
#define JL_SHUTDOWN_ACTIVITYMANAGER_SHUTDOWN_START         "JLOG14037"
#define JL_SHUTDOWN_RADIOS_SHUTDOWN_START                  "JLOG14038"
#define JL_SHUTDOWN_MOUNTSERVICE_SHUTDOWN_START            "JLOG14039"
#define JL_SHUTDOWN_SYSTEM_SHUTDOWN_START                  "JLOG14040"
#define JL_SHUTDOWN_LOWLEVEL_SHUTDOWN_START                "JLOG14041"
#define JL_ROTATION_PROCESS_START                          "JLOG14042"
#define JL_ROTATION_CHANGED_END                            "JLOG14043"
#define JL_ROTATION_ANIMATION_COMPLETED                    "JLOG14044"
#define JL_SCREENACQUIRED_START                            "JLOG14045"
#define JL_SCREENRELEASED_START                            "JLOG14046"
#define JL_BOOT_PROGRESS_KERNEL_END                        "JLOG14047"
#define JL_BOOT_PROGRESS_INITZYGOTE_START                  "JLOG14048"
#define JL_POWKEY_PWIND_KEYCHECKED_TOWAKEUP                "JLOG14049"
#define JL_POWKEY_PMS_WAKEUP_START                         "JLOG14050"
#define JL_POWKEY_PWIND_KEYCHECKED_TOSLEEP                 "JLOG14051"
#define JL_POWKEY_PMS_GOSLEEP_START                        "JLOG14052"
#define JL_HWC_DISPLAY_BLANK_START                         "JLOG14053"
#define JL_HWC_DISPLAY_UNBLANK_START                       "JLOG14054"
#define JL_HWC_DISPLAY_BLANK_END                           "JLOG14055"
#define JL_HWC_DISPLAY_UNBLANK_END                         "JLOG14056"

/*Add performance log Wuzhen/w00213434 20140418 end > */

#define JLOG0         0
#define JLOG1         1
#define JLOG2         2
#define JLOG3         3
#define JLOG4         4
#define JLOG5         5
#define JLOG6         6
#define JLOG7         7
#define JLOG8         8
#define JLOG9         9
#define JLOG10        10
#define JLOG11        11
#define JLOG12        12
#define JLOG13        13
#define JLOG14        14
#define JLOG15        15
#define JLOG16        16
#define JLOG17        17
#define JLOG18        18
#define JLOG19        19
#define JLOG20        20
#define JLOG21        21
#define JLOG22        22
#define JLOG23        23
#define JLOG24        24
#define JLOG25        25
#define JLOG26        26
#define JLOG27        27
#define JLOG28        28
#define JLOG29        29
#define JLOG30        30
#define JLOG31        31
#define JLOG32        32
#define JLOG33        33
#define JLOG34        34
#define JLOG35        35
#define JLOG36        36
#define JLOG37        37
