/* sub_6081E020
 * address: 0x6081E020   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081E020(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60CC6D78;
  if ( !dword_60CC6D78 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x1AA18u, a1, 8);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C2A57C;
    dword_60CC6D74 = (int)v4;
    result = MiiIconModelHeap_ref();
    dword_60CC6D78 = result;
  }
  return result;
}
