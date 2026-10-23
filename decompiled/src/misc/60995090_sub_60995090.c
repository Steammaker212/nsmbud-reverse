/* sub_60995090
 * address: 0x60995090   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_60995090(_DWORD *a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _BYTE *v10; // r0
  bool v11; // zf
  _DWORD *v12; // r0
  _BYTE *v13; // r0
  bool v14; // zf
  _DWORD *v15; // r0
  const char **v16; // r0
  const char **v17; // r0
  const char **result; // r0

  a1[4] = a3;
  v6 = a3[3];
  if ( FIELD_U32(v6, 12) )
    v7 = v6 + 136;
  else
    v7 = a3[7];
  a1[3] = v7;
  v8 = sub_60853E04(a2, "GaugeRatio");
  a1[5] = sub_60980680((int)a3, v8, 1);
  v9 = sub_60853E04(a2, "TraceRatio");
  a1[6] = sub_60980680((int)a3, v9, 1);
  *(_BYTE *)(a1[5] + 51) &= ~0x20u;
  *(_BYTE *)(a1[6] + 51) &= ~0x20u;
  v10 = (_BYTE *)sub_60853E04(a2, "TraceColor");
  v11 = v10 == 0;
  if ( v10 )
    v11 = *v10 == 0;
  if ( !v11 )
  {
    v12 = sub_60980A38(a3, (int)v10, 1);
    a1[7] = v12;
    if ( v12 )
      *((_BYTE *)v12 + 51) &= ~0x20u;
  }
  v13 = (_BYTE *)sub_60853E04(a2, "Shortage");
  v14 = v13 == 0;
  if ( v13 )
    v14 = *v13 == 0;
  if ( !v14 )
  {
    v15 = sub_60980A38(a3, (int)v13, 1);
    a1[8] = v15;
    if ( v15 )
      *((_BYTE *)v15 + 51) &= ~0x20u;
  }
  v16 = sub_6085982C(a3[3], "TracingSpeed");
  if ( v16 || (v16 = sub_60853E60(a2, "TracingSpeed")) != 0 )
  {
    if ( *((_WORD *)v16 + 4) )
      a1[12] = *(_DWORD *)&v16[1][(_DWORD)v16];
  }
  v17 = sub_6085982C(a3[3], "TracingFraction");
  if ( v17 || (v17 = sub_60853E60(a2, "TracingFraction")) != 0 )
  {
    if ( *((_WORD *)v17 + 4) )
      a1[13] = *(_DWORD *)&v17[1][(_DWORD)v17];
  }
  result = sub_6085982C(a3[3], "TracingWait");
  if ( result || (result = sub_60853E60(a2, "TracingWait")) != 0 )
  {
    if ( *((_WORD *)result + 4) )
    {
      result = *(const char ***)&result[1][(_DWORD)result];
      a1[17] = result;
    }
  }
  return result;
}
