/* sub_6022E760
 * address: 0x6022E760   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022E760(int a1)
{
  int v1; // r2
  bool v2; // zf
  int v3; // r1
  unsigned int v4; // r0
  unsigned int v5; // r3
  int v6; // r1
  int v7; // r0

  v1 = 8;
  v2 = FIELD_U8(a1, 36) == 0;
  v3 = FIELD_U32(a1, 8);
  v4 = FIELD_U32(a1, 32);
  if ( v2 )
    v1 = 32;
  v5 = FIELD_U32(v3, 24);
  v6 = FIELD_U32(v3, 28);
  if ( v5 > v4 )
    v6 += 4 * v4;
  v7 = *(_DWORD *)(*(_DWORD *)v6 + 28) & v1;
  return v7 != 0;
}
