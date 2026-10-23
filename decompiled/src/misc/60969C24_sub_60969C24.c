/* sub_60969C24
 * address: 0x60969C24   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60969C24(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CD0B60;
  if ( !dword_60CD0B60 )
  {
    v2 = operator_new_8DE2C8(0x598u, (int)a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5EC10;
    dword_60CD0B5C = (int)v3;
    *(_DWORD *)v2 = off_60C5EC20;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 28) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 20), 205, v2 + 32);
    Icon_LAYOUT_Security_agl_shader_ref((sead_IDisposer *)(v2 + 852));
    Icon_LAYOUT_Security_agl_shader_ref((sead_IDisposer *)(v2 + 948));
    Icon_LAYOUT_Security_agl_shader_ref((sead_IDisposer *)(v2 + 1044));
    Icon_LAYOUT_Security_agl_shader_ref((sead_IDisposer *)(v2 + 1140));
    Icon_LAYOUT_Security_agl_shader_ref((sead_IDisposer *)(v2 + 1236));
    Icon_LAYOUT_Security_agl_shader_ref((sead_IDisposer *)(v2 + 1332));
    FIELD_U8(v2, 1428) = 1;
    dword_60CD0B60 = v2;
  }
  return v2;
}
