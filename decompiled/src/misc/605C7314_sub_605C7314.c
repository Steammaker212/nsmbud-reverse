/* sub_605C7314
 * address: 0x605C7314   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C7314(int a1)
{
  int *v1; // r2
  unsigned int v2; // r1
  int v3; // r2

  v1 = dword_60CB0BE4;
  v2 = FIELD_U8(a1, 2944);
  if ( v2 < 0xB )
    v1 = &dword_60CB0BE4[3 * v2];
  FIELD_U32(a1, 2928) = v1;
  v3 = v1[1];
  FIELD_U32(a1, 992) = v3;
  FIELD_U8(a1, 2943) = v3 < 0x40000000;
  return sub_6040F4B8(FIELD_U32(a1, 912), (int)&dword_60CB9274[2 * v2], 0, 1.0, 0.0);
}
