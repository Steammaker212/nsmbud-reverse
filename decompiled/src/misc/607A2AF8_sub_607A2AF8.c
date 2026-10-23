/* sub_607A2AF8
 * address: 0x607A2AF8   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607A2AF8(int a1)
{
  _BYTE *v2; // r6
  int *v3; // r7
  int v4; // r0
  int v5; // r5
  int v6; // r4
  float v7; // s0
  _BYTE *v8; // r4
  char v9; // r12
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r4
  float v13; // s0
  int v14; // [sp+0h] [bp-28h] BYREF
  int target[9]; // [sp+4h] [bp-24h] BYREF

  v2 = (_BYTE *)(a1 + 15073);
  if ( FIELD_U8(a1, 15073) )
  {
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 160), target, &v14);
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 156), target, &v14);
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 164), target, &v14);
    v3 = (int *)(a1 + 11360);
  }
  else if ( FIELD_U8(a1, 15072) )
  {
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 160), target, &v14);
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 156), target, &v14);
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 164), target, &v14);
    v3 = (int *)(a1 + 11360);
    if ( sub_60793CA8(FIELD_U32(a1, 11360)) == 1 )
    {
      *v2 = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)*v3 + 168))(*v3);
      sub_6078E608(*(float **)(a1 + 11368), 9);
      (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)*v3 + 84))(*v3, 233, 1.0, 0.0, 0.0);
      (*(void (__fastcall **)(int))(*(_DWORD *)*v3 + 164))(*v3);
    }
  }
  else
  {
    if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
      FIELD_U32(a1, 1228) &= ~0x400u;
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1088))(a1, 3032.0);
    target[0] = 0;
    v14 = 0x4000000;
    moveValueTo((int *)(a1 + 160), target, &v14);
    v14 = 0x4000000;
    target[0] = 0;
    moveValueTo((int *)(a1 + 156), target, &v14);
    v14 = 0x4000000;
    target[0] = 0;
    moveValueTo((int *)(a1 + 164), target, &v14);
    sub_6078E608(*(float **)(a1 + 11368), FIELD_U32(a1, 11384));
    v3 = (int *)(a1 + 11360);
    v10 = *(_DWORD **)(a1 + 11360);
    v11 = v10[7];
    FIELD_U32(a1, 15092) = v11;
    FIELD_U8(a1, 15075) = 0;
    if ( v11 == -1 )
    {
      FIELD_U32(a1, 15092) = v10[9];
      FIELD_U8(a1, 15075) = 1;
    }
    (*(void (__fastcall **)(_DWORD *, int, float, float, float))(*v10 + 84))(v10, 232, 1.0, 0.0, 0.0);
    (*(void (__fastcall **)(int))(*(_DWORD *)*v3 + 164))(*v3);
    FIELD_U8(a1, 15072) = 1;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)*v3 + 148))(*v3);
  if ( *v2 && sub_60793CA8(*v3) == 1 )
  {
    if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
      FIELD_U32(a1, 1228) |= 0x400u;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1092))(a1);
    if ( (FIELD_U8(a1, 1213) & 0x20) != 0 )
      v4 = FIELD_U32(a1, 12264);
    else
      v4 = sub_60773F3C(a1, FIELD_U32(a1, 80));
    FIELD_U32(a1, 160) = v4;
    FIELD_U8(a1, 11996) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)*v3 + 168))(*v3);
    if ( FIELD_U8(a1, 15075) )
    {
      v5 = sub_607C7184(a1);
      PlayerBase_dispatchVirtual3(a1 + 11356, 0, 0.0);
      if ( v5 )
      {
        v6 = FIELD_U32(a1, 15092);
        v7 = (*(float (__fastcall **)(int, int))(*(_DWORD *)*v3 + 76))(*v3, v6);
        sub_607934D4((_DWORD *)*v3, v6, v7, 0.0, 0.0);
        v8 = (_BYTE *)sub_6075EDD4(v5);
        if ( ((unsigned int)&dword_60CC4B70 & ~(1618619752 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B70) )
        {
          dword_60CC4B6C = (int)&off_60C23E58;
          _cxa_guard_release(&dword_60CC4B70);
        }
        if ( v8 )
        {
          if ( (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v8 + 8))(v8, &dword_60CC4B6C) == 1 )
            v8[236] = 1;
        }
      }
    }
    else
    {
      v12 = FIELD_U32(a1, 15092);
      v13 = (*(float (__fastcall **)(int, int))(*(_DWORD *)*v3 + 76))(*v3, v12);
      (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)*v3 + 84))(*v3, v12, v13, 0.0, 0.0);
    }
  }
}
