/* sub_6064D988
 * address: 0x6064D988   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064D988(int a1, _BYTE *a2)
{
  char v2; // r12
  unsigned __int8 v4; // r6
  _DWORD *i; // r4
  int v6; // r7
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  _BOOL4 v10; // r1
  _BOOL4 v11; // r0
  char v12; // r3
  unsigned __int8 v13; // r2
  char v14; // r3
  unsigned __int8 v15; // r1
  _BOOL4 v16; // r0
  _BOOL4 v17; // r2
  char v18; // r7
  bool v19; // zf
  unsigned __int8 v20; // r2
  char v21; // r3
  unsigned __int8 v22; // r0
  int v23; // r4

  v4 = 0;
  for ( i = *(_DWORD **)(a1 + 6360); i; i = (_DWORD *)i[1] )
  {
    if ( *i )
    {
      v6 = *(_DWORD *)(*i + 2196);
      if ( (unsigned int)FIELD_U8(v6, 533) - 1 <= 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1617222184 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v6 )
        {
          v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378);
          if ( v7 )
            v7 = v6;
        }
        else
        {
          v7 = 0;
        }
        if ( (FIELD_U8(v7, 1217) & 0x10) == 0
          && (!FIELD_U8(dword_60CC6D8C, 17) || FIELD_U8(v6, 84) != 255) )
        {
          FIELD_U32(v7, 1220) |= 8u;
          v8 = a1;
          v9 = FIELD_U8(v6, 84);
          if ( v9 < 4 )
            v8 = a1 + (char)v9;
          FIELD_U8(v8, 6584) = 40;
          v4 |= byte_60B07570[(char)v9];
        }
      }
    }
  }
  v10 = 1;
  v11 = 1;
  if ( FIELD_U8(a1, 6584) )
  {
    v12 = FIELD_U8(a1, 6584) - 1;
    FIELD_U8(a1, 6584) = v12;
    v10 = v12 == 0;
  }
  v13 = v4;
  if ( !v10 )
    v13 = v4 | 1;
  if ( (v4 & 1) != 0 )
    v13 = v4;
  if ( FIELD_U8(a1, 6585) )
  {
    v14 = FIELD_U8(a1, 6585) - 1;
    FIELD_U8(a1, 6585) = v14;
    v11 = v14 == 0;
  }
  v15 = v13;
  if ( !v11 )
    v15 = v13 | 2;
  if ( (v13 & 2) != 0 )
    v15 = v13;
  v16 = 1;
  v17 = 1;
  if ( FIELD_U8(a1, 6586) )
  {
    v18 = FIELD_U8(a1, 6586) - 1;
    FIELD_U8(a1, 6586) = v18;
    v17 = v18 == 0;
  }
  v19 = !v17;
  v20 = v15;
  if ( v19 )
    v20 = v15 | 4;
  if ( (v15 & 4) != 0 )
    v20 = v15;
  if ( FIELD_U8(a1, 6587) )
  {
    v21 = FIELD_U8(a1, 6587) - 1;
    FIELD_U8(a1, 6587) = v21;
    v16 = v21 == 0;
  }
  v19 = !v16;
  v22 = v20;
  if ( v19 )
    v22 = v20 | 8;
  if ( (v20 & 8) != 0 )
    v22 = v20;
  v23 = v22;
  *a2 = sub_6064D634((unsigned __int8 *)a1, v22);
  return v23;
}
