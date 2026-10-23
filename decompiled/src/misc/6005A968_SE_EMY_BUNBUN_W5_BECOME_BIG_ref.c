/* SE_EMY_BUNBUN_W5_BECOME_BIG_ref
 * address: 0x6005A968   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BUNBUN_W5_BECOME_BIG_ref(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int result; // r0
  _DWORD v14[4]; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v15[2]; // [sp+14h] [bp-1Ch] BYREF

  v2 = a1 + 1801;
  j_ModelWrapper_updateAnims(a1[1801]);
  v3 = *(_DWORD **)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    sub_608134CC(a1 + 1583, "SE_EMY_BUNBUN_W5_BECOME_BIG", *((__int16 *)a1 + 3320), 0);
  v5 = *(_DWORD **)(*v2 + 12);
  v6 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
    EffectData_setEffectId((EffectData *)(a1 + 2262), 1177);
  v7 = *(_DWORD **)(*v2 + 12);
  v8 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
  {
    face_1_ref((int)a1, v15);
    sub_602375C4((EffectData *)(a1 + 1865), 1206, v15, 0, 0);
  }
  v9 = *(_DWORD **)(*v2 + 12);
  v10 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1172))(a1);
  v11 = *(_DWORD *)(*v2 + 12);
  v12 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v12 )
    v11 += 4 * v12;
  result = *(unsigned __int8 *)(*(_DWORD *)v11 + 28);
  if ( (result & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C80630);
    v14[2] = &sead__SafeStringBase__vtable;
    v14[3] = "wait";
    sub_60051780((int)a1);
    v14[0] = &sead__SafeStringBase__vtable;
    v14[1] = "wait";
    sub_60051794((int)a1, (int)v14, 1);
    a1[36] = 1074790400;
    a1[37] = 1074790400;
    a1[38] = 1074790400;
    return 1074790400;
  }
  return result;
}
