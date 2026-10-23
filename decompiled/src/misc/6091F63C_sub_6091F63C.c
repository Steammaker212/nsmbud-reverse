/* sub_6091F63C
 * address: 0x6091F63C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091F63C(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r1
  unsigned int v7; // r0
  unsigned int v8; // r2
  int v9; // r1
  _DWORD *v10; // r0
  unsigned int v11; // r2
  int v12; // r0
  unsigned int v13; // r1
  int v14; // r7
  int v15; // r6
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int *v19; // r0
  int v20; // r2
  int v21; // r5
  void (__fastcall ***v22)(_DWORD, int); // r0
  _BYTE v24[32]; // [sp+0h] [bp-20h] BYREF

  ++FIELD_U16(a1, 60);
  nn__os__GetSystemTick((nn__os *)v24);
  v4 = FIELD_U32(a1, 64);
  if ( v4 )
  {
    v5 = FIELD_U32(a1, 68);
    do
    {
      if ( (FIELD_U8(v5, 308) & 1) != 0 )
      {
        v6 = FIELD_U32(v5, 8);
        v7 = FIELD_U16(v5, 4);
        v8 = FIELD_U32(v6, 28);
        v9 = FIELD_U32(v6, 32);
        if ( v8 > v7 )
          v9 += 936 * v7;
        v10 = *(_DWORD **)(v9 + 4);
        if ( FIELD_U16(v5, 6) )
        {
          v11 = v10[4];
          v12 = v10[5];
          v13 = FIELD_U16(v5, 6) - 1;
          if ( v11 > v13 )
            v12 += 936 * v13;
        }
        else
        {
          v12 = v10[3];
        }
        FIELD_U8(v12, 8) |= 0xAu;
        sub_6091D95C(v12);
      }
      v5 += 312;
      --v4;
    }
    while ( v4 );
  }
  v14 = FIELD_U32(a1, 28);
  if ( !v14 )
    goto LABEL_24;
  v15 = FIELD_U32(a1, 32);
  if ( a2 )
  {
    v16 = 0;
    if ( (v14 & 1) != 0 )
    {
      *(_DWORD *)(FIELD_U32(v15, 4) + 32) = FIELD_U32(a1, 36);
      v16 = 1;
    }
    if ( v14 != 1 )
    {
      v17 = 936 * (__int16)v16 + v15;
      v18 = v14 - v16;
      v19 = (int *)(v17 + 940);
      do
      {
        v18 -= 2;
        *(_DWORD *)(*(v19 - 234) + 32) = FIELD_U32(a1, 36);
        v20 = *v19;
        v19 += 468;
        FIELD_U32(v20, 32) = FIELD_U32(a1, 36);
      }
      while ( v18 );
    }
LABEL_24:
    nn__os__GetSystemTick((nn__os *)v24);
    v22 = *(void (__fastcall ****)(_DWORD, int))(a1 + 40);
    v21 = 1;
    if ( v22 )
      (**v22)(v22, a1);
    return v21;
  }
  v21 = 0;
  while ( 1 )
  {
    *(_DWORD *)(FIELD_U32(v15, 4) + 32) = FIELD_U32(a1, 36);
    if ( sub_6091DF38(v15, 0) )
      return v21;
    --v14;
    v15 += 936;
    if ( !v14 )
      goto LABEL_24;
  }
}
