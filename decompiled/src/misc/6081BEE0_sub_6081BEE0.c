/* sub_6081BEE0
 * address: 0x6081BEE0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081BEE0(int a1)
{
  int v2; // r4

  v2 = dword_60CC6C3C;
  if ( !dword_60CC6C3C )
  {
    v2 = operator_new_8DE2C8(0x5Cu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60C2A4DC;
    dword_60CC6C38 = v2;
    FIELD_U32(v2, 16) = 0;
    FIELD_U32(v2, 24) = v2 + 32;
    FIELD_U32(v2, 20) = &BufferedSafeStringBase_char_vtable_probably;
    FIELD_U32(v2, 28) = 16;
    sead__BufferedSafeStringBase__assureTerminationImpl_const(v2 + 20);
    **(_BYTE **)(v2 + 24) = 0;
    FIELD_U32(v2, 20) = &off_60BD54D4;
    FIELD_U32(v2, 52) = v2 + 60;
    FIELD_U32(v2, 48) = &BufferedSafeStringBase_char_vtable_probably;
    FIELD_U32(v2, 56) = 16;
    sead__BufferedSafeStringBase__assureTerminationImpl_const(v2 + 48);
    **(_BYTE **)(v2 + 52) = 0;
    FIELD_U32(v2, 48) = &off_60BD54D4;
    FIELD_U8(v2, 76) = 0;
    FIELD_U32(v2, 80) = -1;
    FIELD_U32(v2, 84) = -1;
    FIELD_U32(v2, 88) = -1;
    dword_60CC6C3C = v2;
  }
  return v2;
}
