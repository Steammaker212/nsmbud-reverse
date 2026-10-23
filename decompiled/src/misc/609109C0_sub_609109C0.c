/* sub_609109C0
 * address: 0x609109C0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609109C0(int a1, unsigned int a2, int a3)
{
  unsigned int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r6

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C5D30C;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U8(a1, 24) = 1;
  v6 = 4 * a2 + 8;
  if ( v6 < 4 * a2 )
    v6 = -1;
  if ( !is_mul_ok(4u, a2) )
    v6 = -1;
  v7 = (_DWORD *)operator_new_8DE2C8(v6, a3, 4);
  v8 = v7 + 2;
  *v7 = 4;
  v7[1] = a2;
  if ( a2 )
    memset(v7 + 2, 0, 4 * a2);
  FIELD_U32(a1, 16) = v8;
  FIELD_U32(a1, 20) = a2;
  return a1;
}
