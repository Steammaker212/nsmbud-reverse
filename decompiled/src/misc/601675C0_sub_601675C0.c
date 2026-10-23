/* sub_601675C0
 * address: 0x601675C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601675C0(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60C88A70;
  if ( !dword_60C88A70 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x708u, a1, 8);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60BD4A7C;
    dword_60C88A6C = (int)v4;
    result = sub_60167638();
    dword_60C88A70 = result;
  }
  return result;
}
