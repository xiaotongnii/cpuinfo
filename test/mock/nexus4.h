struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 401,
		.content = "Processor\t: ARMv7 Processor rev 2 (v7l)\n"
			   "processor\t: 0\n"
			   "BogoMIPS\t: 13.53\n"
			   "\n"
			   "processor\t: 1\n"
			   "BogoMIPS\t: 13.53\n"
			   "\n"
			   "processor\t: 2\n"
			   "BogoMIPS\t: 13.53\n"
			   "\n"
			   "processor\t: 3\n"
			   "BogoMIPS\t: 13.53\n"
			   "\n"
			   "Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 \n"
			   "CPU implementer\t: 0x51\n"
			   "CPU architecture: 7\n"
			   "CPU variant\t: 0x0\n"
			   "CPU part\t: 0x06f\n"
			   "CPU revision\t: 2\n"
			   "\n"
			   "Hardware\t: QCT APQ8064 MAKO\n"
			   "Revision\t: 000b\n"
			   "Serial\t\t: 0000000000000000\n",
	},
	{
		.path = "/system/build.prop",
		.size = 3069,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=LMY48T\n"
			"ro.build.display.id=LMY48T\n"
			"ro.build.version.incremental=2237560\n"
			"ro.build.version.sdk=22\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=5.1.1\n"
			"ro.build.date=Tue Sep  8 20:51:21 UTC 2015\n"
			"ro.build.date.utc=1441745481\n"
			"ro.build.type=user\n"
			"ro.build.user=android-build\n"
			"ro.build.host=kpfj15.cbf.corp.google.com\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=occam-user\n"
			"ro.product.model=Nexus 4\n"
			"ro.product.brand=google\n"
			"ro.product.name=occam\n"
			"ro.product.device=mako\n"
			"ro.product.board=MAKO\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.cpu.abilist=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=\n"
			"ro.product.manufacturer=LGE\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=msm8960\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=mako\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=occam-user 5.1.1 LMY48T 2237560 release-keys\n"
			"ro.build.fingerprint=google/occam/mako:5.1.1/LMY48T/2237560:user/release-keys\n"
			"ro.build.characteristics=nosdcard\n"
			"# end build properties\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.config.ringtone=Themos.ogg\n"
			"ro.config.notification_sound=Tejat.ogg\n"
			"ro.config.alarm_alert=Oxygen.ogg\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.com.android.dataroaming=false\n"
			"ro.url.legal=http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html\n"
			"ro.url.legal.android_privacy=http://www.google.com/intl/%s/mobile/android/basic/privacy.html\n"
			"ro.com.google.clientidbase=android-google\n"
			"ro.carrier=unknown\n"
			"ro.com.android.wifi-watchlist=GoogleGuest\n"
			"ro.error.receiver.system.apps=com.google.android.gms\n"
			"ro.setupwizard.enterprise_mode=1\n"
			"ro.opengles.version=196608\n"
			"ro.sf.lcd_density=320\n"
			"persist.audio.handset.mic.type=digital\n"
			"persist.audio.dualmic.config=endfire\n"
			"persist.audio.fluence.voicecall=true\n"
			"persist.audio.handset.mic=dmic\n"
			"persist.audio.fluence.mode=endfire\n"
			"persist.audio.lowlatency.rec=false\n"
			"persist.radio.apm_sim_not_pwdn=1\n"
			"ro.telephony.call_ring.multiple=0\n"
			"persist.hwc.mdpcomp.enable=true\n"
			"ro.qualcomm.bt.hci_transport=smd\n"
			"telephony.lteOnCdmaDevice=0\n"
			"drm.service.enabled=true\n"
			"wifi.interface=wlan0\n"
			"wifi.supplicant_scan_interval=15\n"
			"media.aac_51_output_enabled=true\n"
			"debug.egl.recordable.rgba8888=1\n"
			"ro.qc.sensors.wl_dis=true\n"
			"ro.qualcomm.sensors.smd=true\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=192m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=512k\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"keyguard.no_require_sim=true\n"
			"ro.facelock.black_timeout=400\n"
			"ro.facelock.det_timeout=1500\n"
			"ro.facelock.rec_timeout=2500\n"
			"ro.facelock.lively_timeout=2500\n"
			"ro.facelock.est_max_time=600\n"
			"ro.facelock.use_intro_anim=false\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm.features=div\n"
			"dalvik.vm.dexopt-flags=m=y\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/online",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/offline",
		.size = 4,
		.content = "2-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpufreq/all_time_in_state",
		.size = 244,
		.content = "freq\t\tcpu0\t\tcpu1\t\tcpu2\t\tcpu3\t\t\n"
			   "384000\t\t332\t\t71\t\t\n"
			   "486000\t\t35\t\t0\t\t\n"
			   "594000\t\t45\t\t6\t\t\n"
			   "702000\t\t30\t\t29\t\t\n"
			   "810000\t\t5\t\t35\t\t\n"
			   "918000\t\t25\t\t25\t\t\n"
			   "1026000\t\t368\t\t134\t\t\n"
			   "1134000\t\t35\t\t15\t\t\n"
			   "1242000\t\t50\t\t50\t\t\n"
			   "1350000\t\t20\t\t61\t\t\n"
			   "1458000\t\t35\t\t5\t\t\n"
			   "1512000\t\t1642\t\t2152\t\t\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_driver",
		.size = 9,
		.content = "msm_idle\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_governor_ro",
		.size = 5,
		.content = "menu\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1512000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_transition_latency",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies",
		.size = 91,
		.content =
			"384000 486000 594000 702000 810000 918000 1026000 1134000 1242000 1350000 1458000 1512000 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
		.size = 54,
		.content = "interactive ondemand userspace powersave performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_driver",
		.size = 4,
		.content = "msm\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
		.size = 9,
		.content = "ondemand\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/time_in_state",
		.size = 129,
		.content = "384000 346\n"
			   "486000 35\n"
			   "594000 45\n"
			   "702000 30\n"
			   "810000 5\n"
			   "918000 25\n"
			   "1026000 392\n"
			   "1134000 35\n"
			   "1242000 50\n"
			   "1350000 20\n"
			   "1458000 45\n"
			   "1512000 1677\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/total_trans",
		.size = 4,
		.content = "104\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings",
		.size = 2,
		.content = "f\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/affected_cpus",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1512000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_transition_latency",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/related_cpus",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_available_frequencies",
		.size = 91,
		.content =
			"384000 486000 594000 702000 810000 918000 1026000 1134000 1242000 1350000 1458000 1512000 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_available_governors",
		.size = 54,
		.content = "interactive ondemand userspace powersave performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_cur_freq",
		.size = 8,
		.content = "1512000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_driver",
		.size = 4,
		.content = "msm\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_governor",
		.size = 9,
		.content = "ondemand\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_max_freq",
		.size = 8,
		.content = "1512000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/stats/time_in_state",
		.size = 117,
		.content = "384000 3\n"
			   "486000 0\n"
			   "594000 5\n"
			   "702000 0\n"
			   "810000 0\n"
			   "918000 10\n"
			   "1026000 0\n"
			   "1134000 5\n"
			   "1242000 5\n"
			   "1350000 5\n"
			   "1458000 0\n"
			   "1512000 120\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/stats/total_trans",
		.size = 2,
		.content = "9\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings",
		.size = 2,
		.content = "f\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/affected_cpus",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1512000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_transition_latency",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/related_cpus",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/scaling_available_frequencies",
		.size = 91,
		.content =
			"384000 486000 594000 702000 810000 918000 1026000 1134000 1242000 1350000 1458000 1512000 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/scaling_available_governors",
		.size = 54,
		.content = "interactive ondemand userspace powersave performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/scaling_cur_freq",
		.size = 7,
		.content = "384000\n",
	},
	{NULL},
};

#ifdef __ANDROID__
struct cpuinfo_mock_property properties[] = {
	{
		.key = "dalvik.vm.dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.dex2oat-Xmx",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.dexopt-flags",
		.value = "m=y",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "192m",
	},
	{
		.key = "dalvik.vm.heapmaxfree",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heapminfree",
		.value = "512k",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heaptargetutilization",
		.value = "0.75",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xmx",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.isa.arm.features",
		.value = "div",
	},
	{
		.key = "dalvik.vm.stack-trace-file",
		.value = "/data/anr/traces.txt",
	},
	{
		.key = "debug.egl.recordable.rgba8888",
		.value = "1",
	},
	{
		.key = "debug.force_rtl",
		.value = "0",
	},
	{
		.key = "dev.bootcomplete",
		.value = "1",
	},
	{
		.key = "drm.service.enabled",
		.value = "true",
	},
	{
		.key = "gsm.current.phone-type",
		.value = "1",
	},
	{
		.key = "gsm.network.type",
		.value = "Unknown",
	},
	{
		.key = "gsm.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.operator.isroaming",
		.value = "false",
	},
	{
		.key = "gsm.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.sim.state",
		.value = "ABSENT",
	},
	{
		.key = "gsm.version.baseband",
		.value = "M9615A-CEFWMAZM-2.0.1701.07",
	},
	{
		.key = "gsm.version.ril-impl",
		.value = "Qualcomm RIL 1.0",
	},
	{
		.key = "init.svc.adbd",
		.value = "running",
	},
	{
		.key = "init.svc.bdAddrLoader",
		.value = "stopped",
	},
	{
		.key = "init.svc.bootanim",
		.value = "stopped",
	},
	{
		.key = "init.svc.debuggerd",
		.value = "running",
	},
	{
		.key = "init.svc.drm",
		.value = "running",
	},
	{
		.key = "init.svc.flash_recovery",
		.value = "stopped",
	},
	{
		.key = "init.svc.healthd",
		.value = "running",
	},
	{
		.key = "init.svc.installd",
		.value = "running",
	},
	{
		.key = "init.svc.keystore",
		.value = "running",
	},
	{
		.key = "init.svc.kickstart",
		.value = "running",
	},
	{
		.key = "init.svc.lmkd",
		.value = "running",
	},
	{
		.key = "init.svc.logd",
		.value = "running",
	},
	{
		.key = "init.svc.media",
		.value = "running",
	},
	{
		.key = "init.svc.mpdecision",
		.value = "running",
	},
	{
		.key = "init.svc.netd",
		.value = "running",
	},
	{
		.key = "init.svc.netmgrd",
		.value = "running",
	},
	{
		.key = "init.svc.p2p_supplicant",
		.value = "running",
	},
	{
		.key = "init.svc.qcamerasvr",
		.value = "running",
	},
	{
		.key = "init.svc.qmuxd",
		.value = "running",
	},
	{
		.key = "init.svc.qseecomd",
		.value = "running",
	},
	{
		.key = "init.svc.ril-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.rmt_storage",
		.value = "stopped",
	},
	{
		.key = "init.svc.sdcard",
		.value = "running",
	},
	{
		.key = "init.svc.sensors",
		.value = "running",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.surfaceflinger",
		.value = "running",
	},
	{
		.key = "init.svc.thermald",
		.value = "running",
	},
	{
		.key = "init.svc.ueventd",
		.value = "running",
	},
	{
		.key = "init.svc.vold",
		.value = "running",
	},
	{
		.key = "init.svc.wcnss_init",
		.value = "stopped",
	},
	{
		.key = "init.svc.zygote",
		.value = "running",
	},
	{
		.key = "keyguard.no_require_sim",
		.value = "true",
	},
	{
		.key = "media.aac_51_output_enabled",
		.value = "true",
	},
	{
		.key = "net.bt.name",
		.value = "Android",
	},
	{
		.key = "net.change",
		.value = "net.qtaguid_enabled",
	},
	{
		.key = "net.hostname",
		.value = "android-b317fc3af34a6f6e",
	},
	{
		.key = "net.qtaguid_enabled",
		.value = "1",
	},
	{
		.key = "net.tcp.default_init_rwnd",
		.value = "60",
	},
	{
		.key = "persist.audio.dualmic.config",
		.value = "endfire",
	},
	{
		.key = "persist.audio.fluence.mode",
		.value = "endfire",
	},
	{
		.key = "persist.audio.fluence.voicecall",
		.value = "true",
	},
	{
		.key = "persist.audio.handset.mic.type",
		.value = "digital",
	},
	{
		.key = "persist.audio.handset.mic",
		.value = "dmic",
	},
	{
		.key = "persist.audio.lowlatency.rec",
		.value = "false",
	},
	{
		.key = "persist.hwc.mdpcomp.enable",
		.value = "true",
	},
	{
		.key = "persist.radio.apm_sim_not_pwdn",
		.value = "1",
	},
	{
		.key = "persist.radio.custom_ecc",
		.value = "1",
	},
	{
		.key = "persist.radio.custom_ecc_hard",
		.value = "911,*911,#911,112,999,000,08,118,120,122,110,119,995,111,113,125,127,133",
	},
	{
		.key = "persist.radio.custom_ecc_mcc",
		.value = "{234,235,424,426,427,430,431:999},{334:060,066},{422:9999},{730:133}",
	},
	{
		.key = "persist.radio.custom_ecc_mcc_ex",
		.value = "{450:111,112,113,119,122,125,127},{724:190},{425:100,101,102}",
	},
	{
		.key = "persist.radio.custom_ecc_voice",
		.value = "{515:117},{452:113,114,115}",
	},
	{
		.key = "persist.service.bdroid.bdaddr",
		.value = "C4:43:8F:95:AE:C3",
	},
	{
		.key = "persist.sys.country",
		.value = "US",
	},
	{
		.key = "persist.sys.dalvik.vm.lib.2",
		.value = "libart.so",
	},
	{
		.key = "persist.sys.language",
		.value = "en",
	},
	{
		.key = "persist.sys.localevar",
		.value = "",
	},
	{
		.key = "persist.sys.profiler_ms",
		.value = "0",
	},
	{
		.key = "persist.sys.timezone",
		.value = "America/Los_Angeles",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "ptp,adb",
	},
	{
		.key = "ril.ecclist",
		.value = "911,112,000,08,110,999,118,119,*911,#911,120,122,995,111,113,125,127,133",
	},
	{
		.key = "rild.libpath",
		.value = "/system/lib/libril-qc-qmi-1.so",
	},
	{
		.key = "ro.adb.secure",
		.value = "1",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "0",
	},
	{
		.key = "ro.baseband",
		.value = "mdm",
	},
	{
		.key = "ro.board.platform",
		.value = "msm8960",
	},
	{
		.key = "ro.boot.baseband",
		.value = "mdm",
	},
	{
		.key = "ro.boot.bootloader",
		.value = "MAKOZ30f",
	},
	{
		.key = "ro.boot.emmc",
		.value = "true",
	},
	{
		.key = "ro.boot.hardware",
		.value = "mako",
	},
	{
		.key = "ro.boot.serialno",
		.value = "025662b2d7d3aabf",
	},
	{
		.key = "ro.bootloader",
		.value = "MAKOZ30f",
	},
	{
		.key = "ro.bootmode",
		.value = "unknown",
	},
	{
		.key = "ro.build.characteristics",
		.value = "nosdcard",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1441745481",
	},
	{
		.key = "ro.build.date",
		.value = "Tue Sep  8 20:51:21 UTC 2015",
	},
	{
		.key = "ro.build.description",
		.value = "occam-user 5.1.1 LMY48T 2237560 release-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "LMY48T",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "google/occam/mako:5.1.1/LMY48T/2237560:user/release-keys",
	},
	{
		.key = "ro.build.flavor",
		.value = "occam-user",
	},
	{
		.key = "ro.build.host",
		.value = "kpfj15.cbf.corp.google.com",
	},
	{
		.key = "ro.build.id",
		.value = "LMY48T",
	},
	{
		.key = "ro.build.product",
		.value = "mako",
	},
	{
		.key = "ro.build.tags",
		.value = "release-keys",
	},
	{
		.key = "ro.build.type",
		.value = "user",
	},
	{
		.key = "ro.build.user",
		.value = "android-build",
	},
	{
		.key = "ro.build.version.all_codenames",
		.value = "REL",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "2237560",
	},
	{
		.key = "ro.build.version.release",
		.value = "5.1.1",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "22",
	},
	{
		.key = "ro.carrier",
		.value = "unknown",
	},
	{
		.key = "ro.com.android.dataroaming",
		.value = "false",
	},
	{
		.key = "ro.com.android.dateformat",
		.value = "MM-dd-yyyy",
	},
	{
		.key = "ro.com.android.wifi-watchlist",
		.value = "GoogleGuest",
	},
	{
		.key = "ro.com.google.clientidbase",
		.value = "android-google",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "Oxygen.ogg",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "Tejat.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "Themos.ogg",
	},
	{
		.key = "ro.crypto.fuse_sdcard",
		.value = "true",
	},
	{
		.key = "ro.crypto.state",
		.value = "unencrypted",
	},
	{
		.key = "ro.dalvik.vm.native.bridge",
		.value = "0",
	},
	{
		.key = "ro.debuggable",
		.value = "0",
	},
	{
		.key = "ro.error.receiver.system.apps",
		.value = "com.google.android.gms",
	},
	{
		.key = "ro.facelock.black_timeout",
		.value = "400",
	},
	{
		.key = "ro.facelock.det_timeout",
		.value = "1500",
	},
	{
		.key = "ro.facelock.est_max_time",
		.value = "600",
	},
	{
		.key = "ro.facelock.lively_timeout",
		.value = "2500",
	},
	{
		.key = "ro.facelock.rec_timeout",
		.value = "2500",
	},
	{
		.key = "ro.facelock.use_intro_anim",
		.value = "false",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.hardware",
		.value = "mako",
	},
	{
		.key = "ro.opengles.version",
		.value = "196608",
	},
	{
		.key = "ro.product.board",
		.value = "MAKO",
	},
	{
		.key = "ro.product.brand",
		.value = "google",
	},
	{
		.key = "ro.product.cpu.abi2",
		.value = "armeabi",
	},
	{
		.key = "ro.product.cpu.abi",
		.value = "armeabi-v7a",
	},
	{
		.key = "ro.product.cpu.abilist32",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.cpu.abilist64",
		.value = "",
	},
	{
		.key = "ro.product.cpu.abilist",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.device",
		.value = "mako",
	},
	{
		.key = "ro.product.locale.language",
		.value = "en",
	},
	{
		.key = "ro.product.locale.region",
		.value = "US",
	},
	{
		.key = "ro.product.manufacturer",
		.value = "LGE",
	},
	{
		.key = "ro.product.model",
		.value = "Nexus 4",
	},
	{
		.key = "ro.product.name",
		.value = "occam",
	},
	{
		.key = "ro.qc.sensors.wl_dis",
		.value = "true",
	},
	{
		.key = "ro.qualcomm.bt.hci_transport",
		.value = "smd",
	},
	{
		.key = "ro.qualcomm.sensors.smd",
		.value = "true",
	},
	{
		.key = "ro.revision",
		.value = "11",
	},
	{
		.key = "ro.runtime.firstboot",
		.value = "145404",
	},
	{
		.key = "ro.secure",
		.value = "1",
	},
	{
		.key = "ro.serialno",
		.value = "025662b2d7d3aabf",
	},
	{
		.key = "ro.setupwizard.enterprise_mode",
		.value = "1",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "320",
	},
	{
		.key = "ro.telephony.call_ring.multiple",
		.value = "0",
	},
	{
		.key = "ro.url.legal.android_privacy",
		.value = "http://www.google.com/intl/%s/mobile/android/basic/privacy.html",
	},
	{
		.key = "ro.url.legal",
		.value = "http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.zygote",
		.value = "zygote32",
	},
	{
		.key = "selinux.reload_policy",
		.value = "1",
	},
	{
		.key = "service.bootanim.exit",
		.value = "1",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.sysctl.extra_free_kbytes",
		.value = "11520",
	},
	{
		.key = "sys.usb.config",
		.value = "ptp,adb",
	},
	{
		.key = "sys.usb.state",
		.value = "ptp,adb",
	},
	{
		.key = "telephony.lteOnCdmaDevice",
		.value = "0",
	},
	{
		.key = "vold.post_fs_data_done",
		.value = "1",
	},
	{
		.key = "wifi.interface",
		.value = "wlan0",
	},
	{
		.key = "wifi.supplicant_scan_interval",
		.value = "15",
	},
	{
		.key = "wlan.driver.status",
		.value = "ok",
	},
	{NULL},
};
#endif /* __ANDROID__ */
