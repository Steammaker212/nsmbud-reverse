/* sub_604D69A4
 * address: 0x604D69A4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D69A4(int a1)
{
  unsigned int v2; // r2
  int *v3; // r8
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r6
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  int v11; // r7
  int v12; // r5
  bool v13; // nf
  int v14; // r7
  int v15; // r4

  v3 = (int *)(a1 + 4928);
  v2 = FIELD_U32(a1, 4928);
  if ( v2 == 12 )
  {
    v4 = FIELD_U32(a1, 52624);
    FIELD_U32(a1, 52620) = v4;
    v5 = 0;
    *v3 = v4;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    if ( v2 < 0xC )
      v6 = FIELD_U32(a1, 4928);
    v8 = a1 + 3900;
    if ( *(_BYTE *)(a1 + 12 * v6 + 52060) )
      goto LABEL_18;
    v9 = FIELD_U32(a1, 52196);
    v10 = v2 - 1 - v9;
    while ( 1 )
    {
      v11 = v10 + dword_60B02F9C[v7];
      v12 = v11;
      if ( v11 > v9 )
        v12 = FIELD_U32(a1, 52196);
      v13 = v11 < 0;
      v14 = 0;
      if ( v13 )
        v12 = 0;
      if ( (unsigned int)v12 < 0xD )
        v14 = v12;
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 4 * v14 + 3848) + 64) & 1) != 0 )
      {
        v15 = a1;
        if ( (unsigned int)v12 < 0xC )
          v15 = a1 + v12;
        if ( FIELD_U8(v15, 45) )
          break;
      }
      if ( (unsigned int)++v7 >= 0xB )
        goto LABEL_18;
    }
    *v3 = v12;
    v5 = 0;
    if ( v12 < 0 )
    {
LABEL_18:
      FIELD_U32(a1, 52612) = 2;
      sub_60502548(v8);
      FIELD_U16(a1, 4952) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3940));
      *v3 = 256;
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA3DB8);
      return 1;
    }
  }
  return v5;
}
