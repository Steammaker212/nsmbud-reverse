/* sub_60826CBC
 * address: 0x60826CBC   size: 2000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60826CBC(int a1)
{
  int *result; // r0
  int v3; // r4
  int v4; // r5
  int (**v5)(); // [sp+0h] [bp-18h] BYREF
  const char *v6; // [sp+4h] [bp-14h]

  result = &dword_60CBEA44;
  v3 = dword_60CBEA44;
  if ( dword_60CBEA44 )
  {
    v5 = &sead__SafeStringBase__vtable;
    v6 = "statistics";
    sub_6074E918(dword_60CBEA44, &v5);
    v4 = FIELD_U32(a1, 40);
    v5 = &sead__SafeStringBase__vtable;
    v6 = "AppBootCnt";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44124));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "TotalPlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44128));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "MarioStoryPlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44132));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "LuigiStoryPlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44136));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "BoostModePlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44140));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengeModePlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44144));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattlePlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44148));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinEditPlayTime";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44152));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "HavePlayed2P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44300));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "HavePlayed3P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44301));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "HavePlayed4P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44302));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "StoryCourseCount1P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44156));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "StoryCourseCount2P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44160));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "StoryCourseCount3P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44164));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "StoryCourseCount4P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44168));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "MarioStoryCourseCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44172));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "MarioStoryReachedWorld";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44303));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "MarioStoryComplete";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44304));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "MarioStoryStarCoinNum";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44296));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "LuigiStoryCourseCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44176));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "LuigiStoryReachedWorld";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44305));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "LuigiStoryComplete";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44306));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "LuigiStoryStarCoinNum";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44297));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "QuestPlayCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44180));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "OtehonPlayCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44184));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CourseChangePlayerNum";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44188));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "WorldChangePlayerNum";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44192));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "WorldChangeChara";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44196));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "WorldItemUseCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44200));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "BoostCourseCount1P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44204));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "BoostCourseCount2P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44208));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "BoostCourseCount3P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44212));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "BoostCourseCount4P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44216));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "BoostChangeChara";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44220));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengePlayAndRetryCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44224));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengePlayCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44228));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengeReplayPlayCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44232));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengeGoldCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44307));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengeSilverCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44308));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengeBronzeCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U8(v4, 44309));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "ChallengeChangeChara";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44236));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinEditPlayCourseCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44240));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattlePlayCourseCount2P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44244));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattlePlayCourseCount3P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44248));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattlePlayCourseCount4P";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44252));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattlePlayEditCourseCount";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44256));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattleChangeChara";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44260));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinBattleChangeTeam";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44264));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "CoinEditGoToBattle";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44268));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "TimesSelectLuigiU";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44272));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "TimesHint";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44276));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "TimesOnlineMovie";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44280));
    v5 = &sead__SafeStringBase__vtable;
    v6 = "TimesStaffRollNX";
    sub_6074EC10(v3, (const char **)&v5, FIELD_U32(v4, 44284));
    return (int *)sub_6074EC70(v3);
  }
  return result;
}
