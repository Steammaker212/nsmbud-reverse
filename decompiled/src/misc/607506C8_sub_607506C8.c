/* sub_607506C8
 * address: 0x607506C8   size: 3692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607506C8()
{
  signed int v0; // r4
  int v1; // r5
  int v2; // r4
  signed int i; // r5
  int v4; // r4
  signed int j; // r5
  int v6; // r4
  signed int k; // r5
  int v8; // r4
  signed int m; // r5
  int v10; // r4
  signed int n; // r5
  int v12; // r4
  signed int ii; // r5
  int v14; // r4
  signed int jj; // r5
  int v16; // r4
  signed int kk; // r5
  int v18; // r4
  signed int mm; // r5
  int v20; // r4
  signed int nn; // r5

  dword_60CBEAF4 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60CBEAF8 = "KinopicoMdl";
  *(_DWORD *)&algn_60CBEAF8[4] = &sead__SafeStringBase__vtable;
  dword_60CBEB00 = (int)"CommonAnm";
  dword_60CBEB04 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB08 = (int)"CB_model";
  dword_60CBEB0C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB10 = (int)"SCB_model";
  dword_60CBEB14 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB18 = (int)"PLCB_model";
  dword_60CBEB1C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB20 = (int)"PCB_model";
  dword_60CBEB24 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB28 = (int)"MCB_model";
  dword_60CBEB2C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB30 = (int)"peach_model";
  dword_60CBEB34 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB38 = (int)"CH_model";
  dword_60CBEB3C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB40 = (int)"SCH_model";
  dword_60CBEB44 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB48 = (int)"PLCH_model";
  dword_60CBEB4C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB50 = (int)"PCH_model";
  dword_60CBEB54 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB58 = (int)"MCH_model";
  dword_60CBEB5C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB60 = (int)&byte_60ABC94D;
  dword_60CBEB64 = 1099956224;
  dword_60CBEB68 = 1095761920;
  dword_60CBEB6C = 1099956224;
  dword_60CBEB70 = 1099956224;
  dword_60CBEB74 = 1099956224;
  dword_60CBEB78 = 1065353216;
  sub_60000288();
  v0 = 0;
  dword_60CBEE38 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEE3C = (int)"CH_model_switch";
  dword_60CBEE40 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEE44 = (int)"CH_model_switch";
  dword_60CBEE48 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEE4C = (int)"PLCH_switch";
  dword_60CBEE50 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEE54 = (int)"PCH_switch";
  dword_60CBEE58 = (int)&sead__SafeStringBase__vtable;
  unk_60CBEE5C = "MCH_model_switch";
  unk_60CBEE60 = &sead__SafeStringBase__vtable;
  unk_60CBEE64 = &byte_60ABC94D;
  sub_60000288();
  dword_60CBEE70 = (int)&sead__SafeStringBase__vtable;
  unk_60CBEE74 = "CB_model_switch";
  unk_60CBEE78 = &sead__SafeStringBase__vtable;
  dword_60CBEE7C = (int)"CB_model_switch";
  dword_60CBEE80 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEE84 = (int)"PLCB_switch";
  dword_60CBEE88 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEE8C = (int)"PCB_switch";
  dword_60CBEE90 = (int)&sead__SafeStringBase__vtable;
  unk_60CBEE94 = "MCB_model_switch";
  unk_60CBEE98 = &sead__SafeStringBase__vtable;
  unk_60CBEE9C = &byte_60ABC94D;
  sub_60000288();
  dword_60CBECA4 = (int)&unk_60CBECAC;
  dword_60CBECA0 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBECA8 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBECA0);
  dword_60CBECA0 = (int)&off_60C23E7C;
  v1 = dword_60CBECA4;
  if ( (char *)dword_60CBECA4 != "CH_OsageWait" )
  {
    while ( aChOsagewait[v0] )
    {
      if ( v0 > 0x7FFFF )
      {
        v0 = 0;
        break;
      }
      if ( !aChOsagewait[v0 + 1] )
      {
        ++v0;
        break;
      }
      v0 += 2;
    }
    if ( v0 >= dword_60CBECA8 )
      v0 = dword_60CBECA8 - 1;
    qmemcpy((void *)dword_60CBECA4, "CH_OsageWait", v0);
    *(_BYTE *)(v1 + v0) = 0;
  }
  dword_60CBECA0 = (int)&off_60C23E64;
  dword_60CBECC8 = (int)&unk_60CBECD0;
  dword_60CBECC4 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBECCC = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBECC4);
  dword_60CBECC4 = (int)&off_60C23E7C;
  v2 = dword_60CBECC8;
  if ( (char *)dword_60CBECC8 != "CH_P_swim" )
  {
    for ( i = 0; aChPSwim[i]; i += 2 )
    {
      if ( i > 0x7FFFF )
      {
        i = 0;
        break;
      }
      if ( !aChPSwim[i + 1] )
      {
        ++i;
        break;
      }
    }
    if ( i >= dword_60CBECCC )
      i = dword_60CBECCC - 1;
    qmemcpy((void *)dword_60CBECC8, "CH_P_swim", i);
    *(_BYTE *)(v2 + i) = 0;
  }
  dword_60CBECC4 = (int)&off_60C23E64;
  dword_60CBECEC = (int)&unk_60CBECF4;
  dword_60CBECE8 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBECF0 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBECE8);
  dword_60CBECE8 = (int)&off_60C23E7C;
  v4 = dword_60CBECEC;
  if ( (char *)dword_60CBECEC != "CH_goal_puton_cap" )
  {
    for ( j = 0; aChGoalPutonCap[j]; j += 2 )
    {
      if ( j > 0x7FFFF )
      {
        j = 0;
        break;
      }
      if ( !aChGoalPutonCap[j + 1] )
      {
        ++j;
        break;
      }
    }
    if ( j >= dword_60CBECF0 )
      j = dword_60CBECF0 - 1;
    qmemcpy((void *)dword_60CBECEC, "CH_goal_puton_cap", j);
    *(_BYTE *)(v4 + j) = 0;
  }
  dword_60CBECE8 = (int)&off_60C23E64;
  dword_60CBED14 = (int)&unk_60CBED1C;
  dword_60CBED10 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBED18 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBED10);
  dword_60CBED10 = (int)&off_60C23E7C;
  v6 = dword_60CBED14;
  if ( (char *)dword_60CBED14 != "MCH_goal_puton_cap" )
  {
    for ( k = 0; aMchGoalPutonCa[k]; k += 2 )
    {
      if ( k > 0x7FFFF )
      {
        k = 0;
        break;
      }
      if ( !aMchGoalPutonCa[k + 1] )
      {
        ++k;
        break;
      }
    }
    if ( k >= dword_60CBED18 )
      k = dword_60CBED18 - 1;
    qmemcpy((void *)dword_60CBED14, "MCH_goal_puton_cap", k);
    *(_BYTE *)(v6 + k) = 0;
  }
  dword_60CBED10 = (int)&off_60C23E64;
  dword_60CBED38 = (int)&unk_60CBED40;
  dword_60CBED34 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBED3C = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBED34);
  dword_60CBED34 = (int)&off_60C23E7C;
  v8 = dword_60CBED38;
  if ( (char *)dword_60CBED38 != "PCH_goal_puton_cap" )
  {
    for ( m = 0; aPchGoalPutonCa[m]; m += 2 )
    {
      if ( m > 0x7FFFF )
      {
        m = 0;
        break;
      }
      if ( !aPchGoalPutonCa[m + 1] )
      {
        ++m;
        break;
      }
    }
    if ( m >= dword_60CBED3C )
      m = dword_60CBED3C - 1;
    qmemcpy((void *)dword_60CBED38, "PCH_goal_puton_cap", m);
    *(_BYTE *)(v8 + m) = 0;
  }
  dword_60CBED34 = (int)&off_60C23E64;
  dword_60CBED5C = (int)algn_60CBED64;
  dword_60CBED58 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBED60 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBED58);
  dword_60CBED58 = (int)&off_60C23E7C;
  v10 = dword_60CBED5C;
  if ( (char *)dword_60CBED5C != "PLCH_goal_puton_cap" )
  {
    for ( n = 0; aPlchGoalPutonC[n]; n += 2 )
    {
      if ( n > 0x7FFFF )
      {
        n = 0;
        break;
      }
      if ( !aPlchGoalPutonC[n + 1] )
      {
        ++n;
        break;
      }
    }
    if ( n >= dword_60CBED60 )
      n = dword_60CBED60 - 1;
    qmemcpy((void *)dword_60CBED5C, "PLCH_goal_puton_cap", n);
    *(_BYTE *)(v10 + n) = 0;
  }
  dword_60CBED58 = (int)&off_60C23E64;
  dword_60CBED84 = (int)&unk_60CBED8C;
  dword_60CBED80 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBED88 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBED80);
  dword_60CBED80 = (int)&off_60C23E7C;
  v12 = dword_60CBED84;
  if ( (char *)dword_60CBED84 != "CH_dm_ending1" )
  {
    for ( ii = 0; aChDmEnding1[ii]; ii += 2 )
    {
      if ( ii > 0x7FFFF )
      {
        ii = 0;
        break;
      }
      if ( !aChDmEnding1[ii + 1] )
      {
        ++ii;
        break;
      }
    }
    if ( ii >= dword_60CBED88 )
      ii = dword_60CBED88 - 1;
    qmemcpy((void *)dword_60CBED84, "CH_dm_ending1", ii);
    *(_BYTE *)(v12 + ii) = 0;
  }
  dword_60CBED80 = (int)&off_60C23E64;
  dword_60CBEDA8 = (int)&unk_60CBEDB0;
  dword_60CBEDA4 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBEDAC = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBEDA4);
  dword_60CBEDA4 = (int)&off_60C23E7C;
  v14 = dword_60CBEDA8;
  if ( (char *)dword_60CBEDA8 != "CH_dm_ending1_wait" )
  {
    for ( jj = 0; aChDmEnding1Wai[jj]; jj += 2 )
    {
      if ( jj > 0x7FFFF )
      {
        jj = 0;
        break;
      }
      if ( !aChDmEnding1Wai[jj + 1] )
      {
        ++jj;
        break;
      }
    }
    if ( jj >= dword_60CBEDAC )
      jj = dword_60CBEDAC - 1;
    qmemcpy((void *)dword_60CBEDA8, "CH_dm_ending1_wait", jj);
    *(_BYTE *)(v14 + jj) = 0;
  }
  dword_60CBEDA4 = (int)&off_60C23E64;
  dword_60CBEDCC = (int)&unk_60CBEDD4;
  dword_60CBEDC8 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBEDD0 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBEDC8);
  dword_60CBEDC8 = (int)&off_60C23E7C;
  v16 = dword_60CBEDCC;
  if ( (char *)dword_60CBEDCC != "CH_dm_ending2" )
  {
    for ( kk = 0; aChDmEnding2[kk]; kk += 2 )
    {
      if ( kk > 0x7FFFF )
      {
        kk = 0;
        break;
      }
      if ( !aChDmEnding2[kk + 1] )
      {
        ++kk;
        break;
      }
    }
    if ( kk >= dword_60CBEDD0 )
      kk = dword_60CBEDD0 - 1;
    qmemcpy((void *)dword_60CBEDCC, "CH_dm_ending2", kk);
    *(_BYTE *)(v16 + kk) = 0;
  }
  dword_60CBEDC8 = (int)&off_60C23E64;
  dword_60CBEDF4 = (int)&unk_60CBEDFC;
  dword_60CBEDF0 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBEDF8 = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBEDF0);
  dword_60CBEDF0 = (int)&off_60C23E7C;
  v18 = dword_60CBEDF4;
  if ( (char *)dword_60CBEDF4 != "CH_dm_escort" )
  {
    for ( mm = 0; aChDmEscort[mm]; mm += 2 )
    {
      if ( mm > 0x7FFFF )
      {
        mm = 0;
        break;
      }
      if ( !aChDmEscort[mm + 1] )
      {
        ++mm;
        break;
      }
    }
    if ( mm >= dword_60CBEDF8 )
      mm = dword_60CBEDF8 - 1;
    qmemcpy((void *)dword_60CBEDF4, "CH_dm_escort", mm);
    *(_BYTE *)(v18 + mm) = 0;
  }
  dword_60CBEDF0 = (int)&off_60C23E64;
  dword_60CBEE18 = (int)&unk_60CBEE20;
  dword_60CBEE14 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CBEE1C = 24;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CBEE14);
  dword_60CBEE14 = (int)&off_60C23E7C;
  v20 = dword_60CBEE18;
  if ( (char *)dword_60CBEE18 != "CH_dm_escort_wait" )
  {
    for ( nn = 0; aChDmEscortWait[nn]; nn += 2 )
    {
      if ( nn > 0x7FFFF )
      {
        nn = 0;
        break;
      }
      if ( !aChDmEscortWait[nn + 1] )
      {
        ++nn;
        break;
      }
    }
    if ( nn >= dword_60CBEE1C )
      nn = dword_60CBEE1C - 1;
    qmemcpy((void *)dword_60CBEE18, "CH_dm_escort_wait", nn);
    *(_BYTE *)(v20 + nn) = 0;
  }
  dword_60CBEE14 = (int)&off_60C23E64;
  dword_60CBEB7C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB80 = (int)"peach_all_root";
  dword_60CBEB84 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB88 = (int)"skl_root";
  dword_60CBEB8C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB90 = (int)"hip_1";
  dword_60CBEB94 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEB98 = (int)"hip_2";
  dword_60CBEB9C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBA0 = (int)"skirt_1";
  dword_60CBEBA4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBA8 = (int)"skirt_2";
  dword_60CBEBAC = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBB0 = (int)"skirt_b3";
  dword_60CBEBB4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBB8 = (int)"skirt_f3";
  dword_60CBEBBC = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBC0 = (int)"skirt_l3";
  dword_60CBEBC4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBC8 = (int)"skirt_r3";
  dword_60CBEBCC = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBD0 = (int)"leg_l1";
  dword_60CBEBD4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBD8 = (int)"leg_l2";
  dword_60CBEBDC = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBE0 = (int)"ankle_l1";
  dword_60CBEBE4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBE8 = (int)"leg_r1";
  dword_60CBEBEC = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBF0 = (int)"leg_r2";
  dword_60CBEBF4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEBF8 = (int)"ankle_r1";
  dword_60CBEBFC = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC00 = (int)"spin";
  dword_60CBEC04 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC08 = (int)"arm_l1";
  dword_60CBEC0C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC10 = (int)"arm_l2";
  dword_60CBEC14 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC18 = (int)"wrist_l1";
  dword_60CBEC1C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC20 = (int)"arm_r1";
  dword_60CBEC24 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC28 = (int)"arm_r2";
  dword_60CBEC2C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC30 = (int)"wrist_r1";
  dword_60CBEC34 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC38 = (int)"face_1";
  dword_60CBEC3C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC40 = (int)"hair_1";
  dword_60CBEC44 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC48 = (int)"hair_l1";
  dword_60CBEC4C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC50 = (int)"hair_l2";
  dword_60CBEC54 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC58 = (int)"hair_l3";
  dword_60CBEC5C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC60 = (int)"hair_r1";
  dword_60CBEC64 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC68 = (int)"hair_r2";
  dword_60CBEC6C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC70 = (int)"hair_r3";
  dword_60CBEC74 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC78 = (int)"hair_side_l1";
  dword_60CBEC7C = (int)&sead__SafeStringBase__vtable;
  dword_60CBEC80 = (int)"hair_side_r1";
  return sub_60000288();
}
