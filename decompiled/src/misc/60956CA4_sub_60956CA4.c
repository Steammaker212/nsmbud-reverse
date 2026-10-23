/* sub_60956CA4
 * address: 0x60956CA4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60956CA4(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CD0B40;
  if ( !dword_60CD0B40 )
  {
    v2 = operator_new_8DE2C8(0x370u, (int)a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5EA18;
    dword_60CD0B3C = (int)v3;
    *(_DWORD *)v2 = off_60C5EA38;
    memset((void *)(v2 + 20), 0, 44);
    sub_60976CEC(v2 + 64);
    FIELD_U32(v2, 240) = 29;
    FIELD_U32(v2, 244) = 60;
    FIELD_U32(v2, 248) = 3116;
    FIELD_U16(v2, 252) = 0;
    FIELD_U8(v2, 254) = 0;
    NoName_ref(v2 + 276);
    NoName_ref(v2 + 404);
    NoName_ref(v2 + 532);
    NoName_ref(v2 + 660);
    sead__CriticalSection__ctor((sead_IDisposer *)(v2 + 800));
    FIELD_U32(v2, 836) = 0;
    FIELD_U32(v2, 840) = 0;
    FIELD_U32(v2, 844) = 0;
    FIELD_U32(v2, 848) = 1065353216;
    FIELD_U32(v2, 852) = 0;
    FIELD_U32(v2, 856) = 0;
    strcpy((char *)(v2 + 860), "fff?");
    FIELD_U8(v2, 865) = 0;
    FIELD_U8(v2, 866) = 0;
    FIELD_U8(v2, 867) = 1;
    FIELD_U8(v2, 868) = 1;
    FIELD_U8(v2, 869) = 0;
    FIELD_U8(v2, 870) = 1;
    FIELD_U32(v2, 788) = 0;
    FIELD_U32(v2, 792) = 0;
    FIELD_U32(v2, 796) = 0;
    dword_60CD0B40 = v2;
  }
  return v2;
}
