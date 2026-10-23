/* sub_607BFF54
 * address: 0x607BFF54   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BFF54(int a1)
{
  int v2; // r5
  int v3; // r6
  float v4; // s16
  float v5; // s18
  int (__fastcall ***v6)(_DWORD, int *); // r6
  char v7; // r12
  float v8; // s20
  float v9; // s6
  float v10; // s2
  float v11; // s0
  float v12; // s0
  int v13; // r0
  float **v14; // r1
  int v15; // r0
  int v16; // r0
  float v18[2]; // [sp+4h] [bp-34h] BYREF
  char v19; // [sp+Ch] [bp-2Ch]

  v2 = a1 + 688;
  if ( !sub_607869D0(a1 + 688) )
  {
    v3 = 0;
    if ( sub_6078663C(v2) != 1 )
      return v3;
  }
  v4 = 0.0;
  v5 = 3.0;
  if ( (FIELD_U8(a1, 6900) & 2) != 0 )
    goto LABEL_32;
  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6860));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618739160 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v6 || (**v6)(v6, &StageActor_RTTI) != 1 )
    goto LABEL_32;
  v4 = 2.0;
  v5 = 0.5;
  v8 = -4.0;
  v9 = (float)(FIELD_F32(a1, 1256) * 0.5) + 2.0;
  v10 = FIELD_F32(a1, 1252) * 1.3;
  v11 = v9 * 1.3;
  if ( v10 >= -4.0 )
  {
    v8 = FIELD_F32(a1, 1252) * 1.3;
    if ( v10 > 4.0 )
      v8 = 4.0;
  }
  if ( v11 >= 2.0 )
  {
    v4 = v9 * 1.3;
    if ( v11 > 3.1 )
      v4 = 3.1;
  }
  if ( sub_60786750(v2) )
  {
    v12 = -1.5;
  }
  else
  {
    if ( sub_6078675C(v2) != 1 )
      goto LABEL_20;
    v12 = 1.5;
  }
  v8 = v8 + v12;
LABEL_20:
  if ( v8 >= 0.0 )
  {
    if ( v8 <= 0.0 )
    {
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
      v14 = (float **)(a1 + 1276);
      if ( v13 )
        v14 = (float **)(a1 + 1280);
      v5 = **v14 * flt_60B0A898[FIELD_U32(a1, 80)];
      goto LABEL_32;
    }
    if ( v8 >= 0.5 )
    {
      v5 = 4.0;
LABEL_26:
      if ( v8 <= v5 )
        v5 = v8;
    }
  }
  else
  {
    v5 = -4.0;
    if ( v8 >= -4.0 )
    {
      v5 = -0.5;
      goto LABEL_26;
    }
  }
LABEL_32:
  if ( sub_607B74E0(a1, v4, v5) == 1 )
  {
    sub_60773630(a1, 29, 0);
    v15 = FIELD_U32(a1, 80);
    v3 = 1;
    if ( (float)(v5 * flt_60B0A898[v15]) < 0.0 )
      FIELD_U32(a1, 80) = v15 ^ 1;
    FIELD_U32(a1, 1288) = 10;
  }
  else
  {
    v3 = 0;
    if ( sub_6078663C(v2) == 1 )
    {
      sub_60773630(a1, 29, 0);
      v16 = FIELD_U32(a1, 80);
      v3 = 1;
      if ( (float)(v5 * flt_60B0A898[v16]) < 0.0 )
        FIELD_U32(a1, 80) = v16 ^ 1;
      FIELD_U32(a1, 1288) = 10;
      FIELD_F32(a1, 88) = v5;
      v18[0] = v4;
      LODWORD(v18[1]) = 1;
      v19 = 0;
      sub_60773E6C(a1, (StateBase *)&dword_60CC4BE0, (int)v18);
      FIELD_U32(a1, 1220) |= 0x100000u;
    }
  }
  return v3;
}
