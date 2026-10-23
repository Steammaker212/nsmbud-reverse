/* sub_60726854
 * address: 0x60726854   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60726854(int a1)
{
  sead_IDisposer *v2; // r4
  _DWORD *v3; // r0

  v2 = (sead_IDisposer *)dword_60CBD894;
  if ( !dword_60CBD894 )
  {
    v2 = (sead_IDisposer *)operator_new_8DE2C8(0x130u, a1, 4);
    v3 = sead__IDisposer__ctor(&v2[1].vtable, a1, 3u);
    v2[1].vtable = (int)off_60C21D9C;
    dword_60CBD890 = (int)v3;
    sead_IDisposer_ctor(v2);
    FIELD_U32(v2, 0x0) = (int)off_60C21DAC;
    v2[2].vtable = 0;
    sub_6090C6DC((int)&v2[2].field_C);
    sub_6090A654(&v2[13].field_8);
    dword_60CBD894 = (int)v2;
  }
  return v2;
}
