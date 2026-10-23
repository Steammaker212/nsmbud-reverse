/* SE_VOC_ref_3
 * address: 0x60522248   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *SE_VOC_ref_3()
{
  dword_60CA9200 = 0;
  dword_60CA9204 = 0;
  dword_60CA9208 = 0;
  dword_60CA9210 = CurrentStateID + 1;
  dword_60CA920C = (int)&off_60BFFEAC;
  dword_60CA9214 = (int)sub_605202C4;
  dword_60CA9218 = 0;
  dword_60CA921C = (int)SE_SYS_CH_RESULT_SCORE_ref;
  dword_60CA9220 = 0;
  dword_60CA9224 = (int)nullsub_4299;
  dword_60CA9228 = 0;
  dword_60CA9230 = CurrentStateID + 2;
  dword_60CA922C = (int)&off_60BFFEAC;
  dword_60CA9234 = (int)sub_60520448;
  dword_60CA9238 = 0;
  dword_60CA923C = (int)SE_SYS_CH_RESULT_SCORE_ref_2;
  dword_60CA9240 = 0;
  dword_60CA9244 = (int)nullsub_4300;
  dword_60CA9248 = 0;
  dword_60CA9250 = CurrentStateID + 3;
  dword_60CA924C = (int)&off_60BFFEAC;
  dword_60CA9254 = (int)sub_60520588;
  dword_60CA9258 = 0;
  dword_60CA925C = (int)SE_SYS_CH_RESULT_SCORE_BEST_ref;
  dword_60CA9260 = 0;
  dword_60CA9264 = (int)nullsub_4301;
  dword_60CA9268 = 0;
  dword_60CA9270 = CurrentStateID + 4;
  dword_60CA926C = (int)&off_60BFFEAC;
  dword_60CA9274 = (int)sub_605206AC;
  dword_60CA9278 = 0;
  dword_60CA927C = (int)sub_605206BC;
  dword_60CA9280 = 0;
  dword_60CA9284 = (int)nullsub_4302;
  dword_60CA9288 = 0;
  dword_60CA9290 = CurrentStateID + 5;
  dword_60CA928C = (int)&off_60BFFEAC;
  dword_60CA9294 = (int)sub_605208E8;
  dword_60CA9298 = 0;
  dword_60CA929C = (int)SE_SYS_CH_RESULT_GET_ref;
  dword_60CA92A0 = 0;
  dword_60CA92A4 = (int)nullsub_4303;
  dword_60CA92A8 = 0;
  dword_60CA92B0 = CurrentStateID + 6;
  dword_60CA92AC = (int)&off_60BFFEAC;
  dword_60CA92B4 = (int)sub_60520B08;
  dword_60CA92B8 = 0;
  dword_60CA92BC = (int)SE_SYS_FS_PROCESSING_ref;
  dword_60CA92C0 = 0;
  dword_60CA92C4 = (int)nullsub_4304;
  dword_60CA92C8 = 0;
  CurrentStateID += 7;
  dword_60CA92D0 = CurrentStateID;
  dword_60CA92CC = (int)&off_60BFFEAC;
  dword_60CA92D4 = (int)nullsub_4305;
  dword_60CA92D8 = 0;
  dword_60CA92DC = (int)nullsub_4306;
  dword_60CA92E0 = 0;
  dword_60CA92E4 = (int)nullsub_4307;
  dword_60CA92E8 = 0;
  dword_60CA92EC = (int)"SE_VOC_MA_TYUKAN";
  dword_60CA92F0 = (int)"SE_VOC_LU_TYUKAN";
  dword_60CA92F4 = (int)"SE_VOC_KO_TYUKAN";
  dword_60CA92F8 = (int)"SE_VOC_KO2_TYUKAN";
  dword_60CA92FC = (int)"SE_VOC_MA_TYUKAN";
  dword_60CA9300 = (int)"SE_VOC_TT_TYUKAN";
  dword_60CA9304 = (int)"SE_VOC_KC_TYUKAN";
  dword_60CA9308 = (int)"SE_VOC_MM1_TYUKAN";
  dword_60CA930C = (int)"SE_VOC_MM2_TYUKAN";
  dword_60CA9310 = (int)"SE_VOC_MM3_TYUKAN";
  dword_60CA9314 = (int)"SE_VOC_MM4_TYUKAN";
  dword_60CA9318 = (int)"SE_VOC_MF1_TYUKAN";
  dword_60CA931C = (int)"SE_VOC_MF2_TYUKAN";
  dword_60CA9320 = (int)"SE_VOC_MF3_TYUKAN";
  dword_60CA9324 = (int)"SE_VOC_MF4_TYUKAN";
  unk_60CA9328 = "SE_VOC_MA_TYUKAN";
  unk_60CA932C = "SE_VOC_LU_TYUKAN";
  unk_60CA9330 = "SE_VOC_KO_TYUKAN";
  dword_60CA9334 = (int)"SE_VOC_KO2_TYUKAN";
  unk_60CA9338 = "SE_VOC_MA_TYUKAN";
  unk_60CA933C = "SE_VOC_TT_TYUKAN";
  unk_60CA9340 = "SE_VOC_KC_TYUKAN";
  dword_60CA9344 = (int)"SE_VOC_MA_GET_STAR";
  dword_60CA9348 = (int)"SE_VOC_LU_GET_STAR";
  dword_60CA934C = (int)"SE_VOC_KO_GET_STAR";
  dword_60CA9350 = (int)"SE_VOC_KO2_GET_STAR";
  dword_60CA9354 = (int)"SE_VOC_MA_GET_STAR";
  dword_60CA9358 = (int)"SE_VOC_TT_GET_STAR";
  dword_60CA935C = (int)"SE_VOC_KC_GET_STAR";
  dword_60CA9360 = (int)"SE_VOC_MM1_GET_STAR";
  dword_60CA9364 = (int)"SE_VOC_MM2_GET_STAR";
  dword_60CA9368 = (int)"SE_VOC_MM3_GET_STAR";
  dword_60CA936C = (int)"SE_VOC_MM4_GET_STAR";
  dword_60CA9370 = (int)"SE_VOC_MF1_GET_STAR";
  dword_60CA9374 = (int)"SE_VOC_MF2_GET_STAR";
  dword_60CA9378 = (int)"SE_VOC_MF3_GET_STAR";
  dword_60CA937C = (int)"SE_VOC_MF4_GET_STAR";
  unk_60CA9380 = "SE_VOC_MA_GET_STAR";
  unk_60CA9384 = "SE_VOC_LU_GET_STAR";
  unk_60CA9388 = "SE_VOC_KO_GET_STAR";
  dword_60CA938C = (int)"SE_VOC_KO2_GET_STAR";
  dword_60CA9390[0] = "SE_VOC_MA_GET_STAR";
  dword_60CA9390[1] = "SE_VOC_TT_GET_STAR";
  dword_60CA9390[2] = "SE_VOC_KC_GET_STAR";
  return dword_60CA9390;
}
