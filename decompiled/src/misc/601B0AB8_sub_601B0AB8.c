/* sub_601B0AB8
 * address: 0x601B0AB8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B0AB8(int a1)
{
  int v2; // r4

  v2 = dword_60C8A8C0;
  if ( !dword_60C8A8C0 )
  {
    v2 = operator_new_8DE2C8(0xB8u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BD66C4;
    dword_60C8A8BC = v2;
    FIELD_U32(v2, 36) = 0;
    FIELD_U32(v2, 40) = 0;
    FIELD_U32(v2, 44) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 36), 32, v2 + 48);
    FIELD_U16(v2, 16) = 0;
    FIELD_U8(v2, 18) = 0;
    FIELD_U16(v2, 20) = 0;
    FIELD_U8(v2, 22) = 0;
    FIELD_U16(v2, 24) = 0;
    FIELD_U8(v2, 26) = 0;
    FIELD_U16(v2, 28) = 0;
    FIELD_U8(v2, 30) = 0;
    FIELD_U16(v2, 32) = 0;
    FIELD_U8(v2, 34) = 0;
    FIELD_U8(v2, 182) = 0;
    FIELD_U16(v2, 180) = 0;
    FIELD_U32(v2, 176) = 0;
    dword_60C8A8C0 = v2;
  }
  return v2;
}
