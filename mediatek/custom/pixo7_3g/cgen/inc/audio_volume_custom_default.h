#ifndef AUDIO_VOLUME_CUSTOM_DEFAULT_H
#define AUDIO_VOLUME_CUSTOM_DEFAULT_H

#define AUD_VOLUME_RING \
32, 48, 64, 80, 96, 112, 128,     \
32, 48, 64, 80, 96, 112, 128,     \
128, 136, 144, 152, 160, 168, 176

#define AUD_VOLUME_KEY \
112, 136, 160, 184, 208, 232, 255,     \
112, 136, 160, 184, 208, 232, 255,     \
112, 136, 160, 184, 208, 232, 255

#define AUD_VOLUME_MIC \
64, 112, 192, 144, 192, 192, 184,     \
255, 192, 192, 180, 192, 192, 196,     \
255, 208, 208, 180, 255, 208, 208

#define AUD_VOLUME_FMR \
32, 48, 64, 80, 96, 112, 128,     \
32, 40, 48, 60, 68, 76, 84,     \
144, 152, 160, 168, 176, 184, 192
/*[PLATFORM]-Add-BEGIN by TCTSZ.huangjing,2014.06.25,
	modify speech gain in handsfree mode .
*/
#define AUD_VOLUME_SPH \
40, 52, 64, 76, 88, 100, 112,     \
56, 68, 80, 92, 104, 116, 128,     \
80, 92, 104, 116, 128, 140, 152
/*[PLATFORM]-Add-END by TCTSZ.huangjing*/
#define AUD_VOLUME_SID \
0, 0, 16, 0, 0, 0, 0,     \
0, 0, 32, 0, 0, 0, 0,     \
0, 0, 0, 0, 0, 0, 0

#define AUD_VOLUME_MEDIA \
32, 48, 64, 80, 96, 112, 160,     \
32, 40, 48, 60, 68, 76, 84,     \
144, 152, 160, 168, 176, 184, 192

#define AUD_VOLUME_MATV \
32, 48, 64, 80, 96, 112, 128,     \
88, 100, 112, 124, 136, 148, 160,     \
68, 80, 92, 104, 116, 128, 140

#endif
