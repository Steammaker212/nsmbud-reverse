/* sub_6080126C
 * address: 0x6080126C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6080126C(_DWORD *a1, float **a2)
{
  int v4; // r0
  float v5; // s0
  int v6; // r0
  int v7; // r0
  _DWORD v9[2]; // [sp+4h] [bp-44h] BYREF
  _DWORD v10[15]; // [sp+Ch] [bp-3Ch] BYREF

  v4 = a1[6];
  v5 = FIELD_F32(v4, 20);
  v9[0] = FIELD_U32(v4, 16);
  *(float *)&v9[1] = -v5;
  sub_60801B98(v10, a2, v9);
  v6 = a1[7];
  if ( v6 )
  {
    sub_60800C84(v6, a2, (int)v10);
  }
  else
  {
    sub_6080161C(a1[8], a2, v10);
    v7 = a1[9];
    if ( v7 )
      sub_60801F98(v7, a2);
  }
  return sead__IDisposer::~IDisposer(v10);
}
