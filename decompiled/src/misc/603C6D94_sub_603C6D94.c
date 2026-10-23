/* sub_603C6D94
 * address: 0x603C6D94   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C6D94(unsigned __int8 *a1, float a2)
{
  float v3; // s0
  int result; // r0
  int v5; // r3
  unsigned int v6; // r1
  int v7; // r0

  v3 = sub_603C4ED4((int)a1, a2);
  result = a1[539];
  if ( a1[539] )
  {
    v5 = result - 33;
    v6 = 1u >> (33 - result);
    v7 = 1 << (result - 1);
    if ( v5 >= 0 )
    {
      v6 = 1 << v5;
      v7 = 0;
    }
    result = FIELD_U32(EventMgr__instance, 16) & v7 | FIELD_U32(EventMgr__instance, 20) & v6;
    if ( !result )
      return (*(int (__fastcall **)(unsigned __int8 *, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C98878, v3);
  }
  return result;
}
