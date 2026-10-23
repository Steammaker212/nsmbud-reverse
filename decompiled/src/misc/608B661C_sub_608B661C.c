/* sub_608B661C
 * address: 0x608B661C   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B661C(int a1)
{
  int v2; // r8
  bool v3; // zf
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char *v9; // r0
  int i; // r4
  char *v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0

  v2 = a1 + 1428;
  nn__os__LockMutex(a1 + 1428);
  if ( FIELD_U8(a1, 1400) )
  {
    v3 = FIELD_U8(a1, 1401) == 0;
    if ( FIELD_U8(a1, 1401) )
      v3 = FIELD_U8(a1, 1560) == 0;
    if ( !v3 )
    {
      v4 = sub_608D0C9C(a1 + 788, 1);
      sub_608D2444(a1 + 788, 1, v4 ^ 1);
      v5 = sub_608D0C9C(a1 + 788, 2);
      sub_608D2444(a1 + 788, 2, v5 ^ 1);
      v6 = sub_608D0C9C(a1 + 788, 3);
      sub_608D2444(a1 + 788, 3, v6 ^ 1);
      if ( FIELD_U8(a1, 1402) )
      {
        v7 = sub_608D0C9C(a1 + 936, 1);
        sub_608D2444(a1 + 936, 1, v7 ^ 1);
        v8 = sub_608D0C9C(a1 + 936, 2);
        sub_608D2444(a1 + 936, 2, v8 ^ 1);
      }
    }
  }
  v9 = (char *)sub_608065A0();
  nn__os__LockMutex(v9 + 1240);
  for ( i = FIELD_U32(a1, 1236); i != a1 + 1232; i = FIELD_U32(i, 4) )
    ((void (__fastcall *)(int))loc_608D1A98)(i - 36);
  v11 = (char *)sub_608065A0();
  nn__os__UnlockMutex(v11 + 1240);
  v12 = FIELD_U32(a1, 152);
  if ( v12 < FIELD_U32(a1, 148) )
  {
    v13 = v12 + 1;
    FIELD_U32(a1, 152) = v13;
    v14 = sub_608CAEDC(v13);
    sub_608CB474(v14, 64);
  }
  v15 = FIELD_U32(a1, 168);
  if ( v15 < FIELD_U32(a1, 164) )
  {
    v16 = v15 + 1;
    FIELD_U32(a1, 168) = v16;
    v17 = sub_608CAEDC(v16);
    sub_608CB474(v17, 64);
  }
  return nn__os__UnlockMutex(v2);
}
