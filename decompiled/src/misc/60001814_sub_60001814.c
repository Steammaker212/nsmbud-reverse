/* sub_60001814
 * address: 0x60001814   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60001814(StageActor *this, int a2)
{
  int v4; // r6
  int v5; // r3
  int v6; // r2
  bool v7; // zf
  _DWORD *v8; // r7
  int v9; // r2
  _DWORD *v10; // r0
  bool v11; // zf
  int v12; // r1
  bool v13; // zf
  int v14; // r1
  bool v15; // zf

  v4 = 0;
  v5 = FIELD_U32(a2, 2224);
  v6 = v5 & 0x880000;
  if ( (v5 & 0x880000) != 0 )
    v6 = 1;
  v7 = (v5 & 0xE1000000) == 0;
  if ( (v5 & 0xE1000000) == 0 )
    v7 = (((v5 & 0x10000000) == 0 && (v5 & 0x440000) != 0) & (unsigned __int8)v6) == 1;
  if ( !v7 )
    return v4;
  v8 = (_DWORD *)sub_6014B758(a2, 0, v6);
  v10 = (_DWORD *)sub_6014B758(a2, 1, v9);
  v11 = v8 == 0;
  if ( v8 )
    v11 = v10 == 0;
  if ( v11 )
  {
    if ( !v8 )
      goto LABEL_19;
  }
  else
  {
    v4 = 0;
    if ( v8 == v10 || v8[36] == v10[36] )
      return v4;
  }
  v12 = v8[34];
  v4 = 0;
  if ( (v12 & 0x1000) != 0 )
    return v4;
  v13 = (v8[34] & 0x800) == 0;
  if ( (v12 & 0x800) != 0 )
    v13 = v8[75] == 31;
  if ( !v13 )
    return v4;
LABEL_19:
  if ( v10 )
  {
    v14 = v10[34];
    v4 = 0;
    if ( (v14 & 0x1000) != 0 )
      return v4;
    v15 = (v10[34] & 0x800) == 0;
    if ( (v14 & 0x800) != 0 )
      v15 = v10[75] == 31;
    if ( !v15 )
      return v4;
  }
  v4 = 1;
  if ( sub_60001928((int)this, a2, 1) )
    return v4;
  return sub_60001928((int)this, a2, 0);
}
