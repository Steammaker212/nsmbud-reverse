/* sub_60828EF4
 * address: 0x60828EF4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60828EF4(int a1, int a2, char a3, int a4, int a5, _DWORD *a6)
{
  int v8; // r6
  int v9; // r0
  void *v10; // r0
  int v11; // r0
  unsigned int v12; // r2

  v8 = FIELD_U32(a1, 40);
  v9 = v8 + 104 * a2;
  FIELD_U8(v9, 6264) = a3;
  FIELD_U32(v9, 6360) = a4;
  FIELD_U8(v9, 6265) = a5;
  v10 = (void *)(v9 + 6268);
  if ( a5 == 6 )
    sub_6042F294(v10, a6);
  else
    memset(v10, 0, 0x5Cu);
  v11 = 0;
  v12 = FIELD_U32(dword_60CC6D78, 132);
  if ( v12 >= 4 )
    v11 = *(_DWORD *)(FIELD_U32(dword_60CC6D78, 128) + v12 - 4);
  *(_DWORD *)(v8 + 104 * a2 + 6364) = v11;
  FIELD_U8(a1, 45) = 1;
  return 1;
}
