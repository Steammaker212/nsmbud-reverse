/* sub_608C1B7C
 * address: 0x608C1B7C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C1B7C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  _DWORD *v8; // r4

  v7 = sub_608C2394(a1, a3, a4, a6);
  v8 = (_DWORD *)v7;
  if ( !v7 )
    return 0;
  sub_608AF1C4(v7, a2);
  if ( a5 )
    sub_608B0664(v8, a5);
  return v8;
}
