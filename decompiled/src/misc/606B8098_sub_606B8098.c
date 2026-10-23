/* sub_606B8098
 * address: 0x606B8098   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B8098(int a1, int a2)
{
  char v2; // r12
  char v3; // r5
  int v5; // r7
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int (__fastcall ***v8)(_DWORD, int *); // r6
  int (__fastcall ***v9)(_DWORD, int *); // r5
  int v10; // r0
  int v11; // r2
  _DWORD *v12; // r0
  int v13; // r1
  float v14; // s0

  v3 = a2;
  if ( a2 )
  {
    v5 = 0;
    if ( (a2 & 1) != 0 )
    {
      v6 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617658076 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v6 && (**v6)(v6, &dword_60C7B378) == 1 )
        v5 = !sub_606B6EAC(a1, (int)v6);
    }
    if ( (v3 & 2) != 0 )
    {
      v7 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 52);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617658232 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v7 && (**v7)(v7, &dword_60C7B378) == 1 )
        v5 |= !sub_606B6EAC(a1, (int)v7);
    }
    if ( (v3 & 4) != 0 )
    {
      v8 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 56);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617658392 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v8 && (**v8)(v8, &dword_60C7B378) == 1 )
        v5 |= !sub_606B6EAC(a1, (int)v8);
    }
    if ( (v3 & 8) != 0 )
    {
      v9 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 60);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617658552 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v9 && (**v9)(v9, &dword_60C7B378) == 1 )
        v5 |= !sub_606B6EAC(a1, (int)v9);
    }
    if ( v5 )
      EffectWrapper_update((EffectWrapper *)(a1 + 7224), 732, (Vec3 *)(a1 + 6188), 0, 0);
    return;
  }
  if ( FIELD_U32(a1, 6176) )
  {
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 100) = 0;
    if ( FIELD_U32(a1, 6168) )
      sub_606B67E8((_DWORD *)a1, 0);
    v10 = 2;
    if ( FIELD_F32(a1, 6156) <= FIELD_F32(a1, 112) )
      v10 = 3;
    FIELD_U32(a1, 6184) = v10;
    return;
  }
  if ( FIELD_U8(a1, 6182) && !FIELD_U32(a1, 6256) )
  {
    v11 = 2;
    FIELD_U32(a1, 6164) = 2;
    if ( FIELD_F32(a1, 6156) <= FIELD_F32(a1, 112) )
      v11 = 3;
    FIELD_U32(a1, 6184) = v11;
    FIELD_U8(a1, 6182) = 0;
  }
  v12 = (_DWORD *)(a1 + 6184);
  v13 = FIELD_U32(a1, 6184);
  if ( v13 == 2 )
  {
    if ( FIELD_U32(a1, 6164) == 1 )
    {
      FIELD_U32(a1, 136) = 1056964608;
      FIELD_U32(a1, 100) = 1031798784;
    }
    v14 = FIELD_F32(a1, 6156);
    if ( v14 <= FIELD_F32(a1, 112) )
      goto LABEL_53;
  }
  else if ( v13 == 3 )
  {
    if ( FIELD_U32(a1, 6164) == 1 )
    {
      FIELD_U32(a1, 136) = -1090519040;
      FIELD_F32(a1, 100) = -0.0625;
    }
    v14 = FIELD_F32(a1, 6156);
    if ( v14 >= FIELD_F32(a1, 112) )
    {
LABEL_53:
      FIELD_F32(a1, 112) = v14;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 136) = 0;
      FIELD_U32(a1, 100) = 0;
      *v12 = 0;
    }
  }
}
