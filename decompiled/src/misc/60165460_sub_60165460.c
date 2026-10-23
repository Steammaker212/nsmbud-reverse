/* sub_60165460
 * address: 0x60165460   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60165460(_DWORD *a1, int a2, int a3, signed int a4, int a5)
{
  __int64 v9; // r0
  void *v10; // r0
  void *v11; // r7
  int v12; // r7
  int v13; // r0
  unsigned int v14; // r6
  unsigned int v15; // kr00_4
  int v16; // r0
  int v17; // r0
  int result; // r0
  _DWORD v19[13]; // [sp+4h] [bp-34h] BYREF

  if ( a4 < 1 )
  {
    if ( a4 < 0 )
      goto LABEL_17;
  }
  else
  {
    v9 = 4LL * (unsigned int)a4;
    if ( !is_mul_ok(4u, a4) )
      HIDWORD(v9) = 1;
    if ( HIDWORD(v9) )
      LODWORD(v9) = -1;
    v10 = (void *)sub_608DE334(v9, a5, 4);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, 4 * a4);
      a1[96] = a4;
      a1[97] = v11;
    }
  }
  v12 = a4 + 1;
  v15 = a4 + 1;
  v13 = (unsigned __int64)(unsigned int)(a4 + 1) >> 29;
  v14 = 8 * (a4 + 1);
  if ( !is_mul_ok(8u, v15) )
    v13 = 1;
  if ( v13 )
    v14 = -1;
  v16 = sub_608DE334(v14, a5, 4);
  if ( v16 )
  {
    a1[98] = v12;
    a1[99] = v16;
  }
  v17 = sub_608DE334(v14, a5, 4);
  if ( v17 )
  {
    a1[100] = v12;
    a1[101] = v17;
  }
LABEL_17:
  v19[0] = a2 + 108;
  v19[1] = a2 + 584;
  v19[2] = a2 + 86;
  v19[3] = a2 + 87;
  v19[4] = a2 + 84;
  result = sub_60165590(a1, v19, a3);
  a1[36] = a2;
  return result;
}
