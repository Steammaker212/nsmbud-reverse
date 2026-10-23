/* sub_6063F984
 * address: 0x6063F984   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063F984(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  char v4; // r12
  int v5; // r0
  _DWORD *v6; // r6
  unsigned int v7; // r2
  int v8; // r1
  int v9; // r0
  _DWORD *v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // [sp+4h] [bp-24h] BYREF
  int target; // [sp+8h] [bp-20h] BYREF
  int speed; // [sp+Ch] [bp-1Ch] BYREF

  v3 = (_BYTE *)(a1 + 6161);
  result = FIELD_U8(a1, 6161);
  if ( result )
  {
    sub_60640480(a1);
    v6 = (_DWORD *)(a1 + 6184);
    v5 = FIELD_U32(a1, 6184);
    if ( v5 == 1 )
    {
      ((void (__fastcall *)(int))loc_606405DC)(a1);
      v14 = 0x4000000;
      target = 0;
      if ( moveValueTo((int *)(a1 + 6236), &target, &v14) )
      {
        FIELD_U32(a1, 6236) = 0;
        *v6 = 2;
        FIELD_U32(a1, 6212) = 4;
      }
    }
    else if ( v5 )
    {
      v10 = (_DWORD *)(a1 + 6212);
      v9 = FIELD_U32(a1, 6212);
      if ( v9 )
        *v10 = v9 - 1;
      ((void (__fastcall *)(int))loc_606405DC)(a1);
      if ( !*v10 )
      {
        *v6 = 0;
        *v3 = 0;
        FIELD_U32(a1, 6208) = 0;
        memset((void *)(a1 + 6968), 0, 52);
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60CB5880[5] & ~(1617164764 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5880[5]) )
      {
        dword_60CB5948 = 0;
        dword_60CB5944 = 0;
        dword_60CB5940 = 0;
        dword_60CB593C = 0;
        dword_60CB5938 = 0;
        dword_60CB594C = -117440512;
        dword_60CB5950 = -117440512;
        dword_60CB5954 = 0;
        dword_60CB5958 = -100663296;
        dword_60CB595C = -268435456;
        dword_60CB5960 = -268435456;
        dword_60CB5964 = 0;
        _cxa_guard_release(&dword_60CB5880[5]);
      }
      v7 = FIELD_U32(a1, 24);
      v8 = FIELD_U32(a1, 6208);
      speed = 0x1000000;
      if ( moveValueTo((int *)(a1 + 6236), &dword_60CB58F0[((v7 >> 8) & 3 | (4 * v8)) + 18], &speed) )
        *v6 = 1;
    }
    if ( !FIELD_U32(a1, 6984) )
    {
      v11 = FIELD_U32(a1, 6952);
      if ( (unsigned int)(v11 - 1) <= 1 )
        FIELD_U32(a1, 6968) = v11;
    }
    if ( !FIELD_U32(a1, 6988) )
    {
      v12 = FIELD_U32(a1, 6956);
      if ( (unsigned int)(v12 - 1) <= 1 )
        FIELD_U32(a1, 6972) = v12;
    }
    if ( !FIELD_U32(a1, 6992) )
    {
      v13 = FIELD_U32(a1, 6960);
      if ( (unsigned int)(v13 - 1) <= 1 )
        FIELD_U32(a1, 6976) = v13;
    }
    result = FIELD_U32(a1, 6996);
    if ( !result )
    {
      result = FIELD_U32(a1, 6964);
      if ( (unsigned int)(result - 1) <= 1 )
        FIELD_U32(a1, 6980) = result;
    }
  }
  return result;
}
