/* nn_atk_detail_TaskThread_ref
 * address: 0x608C5414   size: 188   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn_atk_detail_TaskThread_ref(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v10; // r0
  int v11; // r5
  int v12; // r6
  _DWORD v14[17]; // [sp+4h] [bp-44h] BYREF

  if ( FIELD_U8(a1, 317) )
  {
    FIELD_U8(a1, 316) = 1;
    v10 = sub_608C4DF4();
    sub_608C52D0((int)v10);
    v11 = a1 + 8;
    sub_608D0864(a1 + 8);
    sub_608D0868(a1 + 8);
    FIELD_U8(a1, 317) = 0;
  }
  else
  {
    v11 = a1 + 8;
  }
  v12 = 0;
  FIELD_U8(a1, 316) = 0;
  sub_608D0780(v14);
  v14[0] = "nn__atk__detail__TaskThread";
  v14[1] = a3;
  v14[2] = a4;
  v14[3] = a5;
  v14[4] = a6;
  v14[5] = a2;
  v14[6] = 0;
  v14[7] = a1;
  if ( sub_608D07BC(v11, v14) == 1 )
  {
    v12 = 1;
    FIELD_U8(a1, 317) = 1;
  }
  return v12;
}
