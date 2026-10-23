/* sub_6091F558
 * address: 0x6091F558   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091F558(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  _DWORD *v10; // r1
  int v12; // [sp+0h] [bp-18h] BYREF

  nn__os__GetSystemTick((nn__os *)&v12);
  v2 = FIELD_U32(a1, 72);
  if ( v2 )
  {
    v3 = FIELD_U32(a1, 76);
    do
    {
      if ( (FIELD_U8(v3, 24) & 1) != 0 )
        sub_6091F7B8(v3);
      v3 += 52;
      --v2;
    }
    while ( v2 );
  }
  v4 = FIELD_U32(a1, 64);
  if ( v4 )
  {
    v5 = FIELD_U32(a1, 68);
    do
    {
      sub_6091F8A0(v5);
      v5 += 312;
      --v4;
    }
    while ( v4 );
  }
  v6 = FIELD_U32(a1, 72);
  if ( v6 )
  {
    v7 = FIELD_U32(a1, 76);
    v8 = 0;
    if ( (v6 & 1) != 0 )
    {
      FIELD_U32(v7, 24) &= ~1u;
      v8 = 1;
    }
    if ( v6 != 1 )
    {
      v9 = v6 - v8;
      v10 = (_DWORD *)(52 * (__int16)v8 + v7 + 76);
      do
      {
        v9 -= 2;
        *(v10 - 13) &= ~1u;
        *v10 &= ~1u;
        v10 += 26;
      }
      while ( v9 );
    }
  }
  return sub_6091F63C(a1, FIELD_U16(a1, 62) & 1);
}
