/* sub_6037325C
 * address: 0x6037325C   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037325C(int a1, int a2)
{
  int v3; // r5
  _BYTE *v4; // r10
  unsigned __int32 v5; // r11
  _DWORD *v6; // r8
  unsigned __int32 v7; // r0
  int v8; // r0
  _DWORD *v9; // r9
  unsigned int v10; // r0
  _DWORD *v11; // r6
  unsigned int v12; // t1
  bool v13; // cf
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r1
  unsigned int v17; // r0
  ModelWrapper *v18; // r0
  int v19; // r6
  int v21; // [sp+0h] [bp-58h] BYREF
  float32x2_t target; // [sp+4h] [bp-54h] BYREF
  int v23; // [sp+Ch] [bp-4Ch]
  int v24; // [sp+10h] [bp-48h]
  int v25; // [sp+14h] [bp-44h]
  int v26; // [sp+18h] [bp-40h]
  int v27; // [sp+1Ch] [bp-3Ch]
  int v28; // [sp+20h] [bp-38h]
  int v29; // [sp+24h] [bp-34h]
  int v30; // [sp+28h] [bp-30h]
  int v31; // [sp+2Ch] [bp-2Ch]
  int v32; // [sp+30h] [bp-28h]

  v3 = 0;
  FIELD_U8(a1, 11802) = 0;
  v4 = (_BYTE *)(a1 + 11801);
  if ( a2 )
  {
    if ( *v4 )
    {
      v5 = 47721858;
      v6 = (_DWORD *)(a1 + 11824);
      v7 = 47721858;
      if ( FIELD_U32(a1, 11824) < 0x2A000u )
        v7 = 143165576;
      target.n64_u32[0] = v7;
      v21 = 5965232;
      moveValueTo((int *)(a1 + 11820), (int *)&target, &v21);
      v8 = FIELD_U32(a1, 11820);
      v9 = (_DWORD *)(a1 + 11816);
      FIELD_U32(a1, 11816) += v8;
      if ( v8 < 0 && v8 != 0x80000000 )
        v8 = -v8;
      v10 = *v6 + HIWORD(v8);
      *v6 = v10;
      if ( v10 > 0x2FFFF )
      {
        *v6 = 196608;
        *v9 = 0;
      }
      v12 = FIELD_U32(a1, 11848);
      v11 = (_DWORD *)(a1 + 11848);
      v13 = v12 >= 0x2E000;
      LOWORD(v14) = -11944;
      if ( v12 < 0x2E000 )
        v5 = 23300;
      HIWORD(v14) = 72;
      if ( !v13 )
        HIWORD(v5) = 1456;
      v21 = v14;
      target.n64_u32[0] = v5;
      moveValueTo((int *)(a1 + 11844), (int *)&target, &v21);
      v15 = FIELD_U32(a1, 11844);
      v16 = (_DWORD *)(a1 + 11840);
      FIELD_U32(a1, 11840) += v15;
      if ( v15 < 0 && v15 != 0x80000000 )
        v15 = -v15;
      v17 = *v11 + HIWORD(v15);
      *v11 = v17;
      if ( v17 > 0x1FFFF )
      {
        *v11 = 0x20000;
        *v16 = 0;
      }
      v18 = *(ModelWrapper **)(a1 + 6300);
      if ( (*((_BYTE *)*FIELD_U32(v18, 0x8).animations + 28) & 0x20) != 0 )
      {
        if ( *v4 )
        {
          v3 = 0;
          FIELD_U8(a1, 11802) = 1;
          *v4 = 0;
          FIELD_U32(a1, 11820) = 0;
          *v9 = 0;
          *v6 = 0;
          FIELD_U32(a1, 11844) = 0;
          *v16 = 0;
          *v11 = 0;
          target.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
          target.n64_u32[1] = (unsigned __int32)"swim";
          sub_6040F4B8(v18, &target, 1);
        }
      }
      else
      {
        ModelWrapper_updateAnims(v18);
        ActorScaler_execute((ActorScaler *)(a1 + 11656));
        target.n64_u64[0] = 1065353216;
        v23 = 0;
        v25 = 0;
        v26 = 1065353216;
        v27 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 1065353216;
        v24 = FIELD_U32(a1, 108);
        v28 = FIELD_U32(a1, 112);
        v32 = FIELD_U32(a1, 116);
        Mtx34_rotateY(&target, (unsigned int *)(a1 + 160));
        Mtx34_rotateX(&target, (unsigned int *)(a1 + 156));
        Mtx34_rotateZ(&target, (unsigned int *)(a1 + 164));
        v19 = **(_DWORD **)(a1 + 6300);
        (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v19 + 60))(v19, &target);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v19 + 68))(v19, a1 + 11660);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 52))(v19);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 56))(v19);
        return 1;
      }
    }
  }
  else
  {
    *v4 = 0;
  }
  return v3;
}
