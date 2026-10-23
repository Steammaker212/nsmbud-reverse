/* sub_601A1890
 * address: 0x601A1890   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A1890(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C89E18;
  if ( !dword_60C89E18 )
  {
    v2 = operator_new_8DE2C8(0x490DCu, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60BD5EAC;
    dword_60C89E14 = (int)v3;
    sub_601A2334(v2);
    dword_60C89E18 = v2;
  }
  return v2;
}
