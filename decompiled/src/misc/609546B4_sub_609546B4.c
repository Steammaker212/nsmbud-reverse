/* sub_609546B4
 * address: 0x609546B4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609546B4(int a1)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C5E9B4;
  FIELD_U32(a1, 16) = &off_60C5EA0C;
  FIELD_U32(a1, 20) = 0;
  sub_6090E38C((_DWORD *)(a1 + 24));
  sub_6090E38C((_DWORD *)(a1 + 48));
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U16(a1, 80) = 1155;
  FIELD_U16(a1, 82) = 194;
  FIELD_U16(a1, 84) = 0;
  FIELD_U8(a1, 86) = 0;
  FIELD_U8(a1, 88) = 0;
  FIELD_U8(a1, 89) = -1;
  FIELD_U16(a1, 112) = 0;
  FIELD_U16(a1, 110) = 0;
  FIELD_U16(a1, 108) = 0;
  FIELD_U16(a1, 106) = 0;
  FIELD_U16(a1, 104) = 0;
  FIELD_U16(a1, 102) = 0;
  FIELD_U16(a1, 100) = 0;
  FIELD_U16(a1, 98) = 0;
  FIELD_U16(a1, 96) = 0;
  FIELD_U16(a1, 94) = 0;
  FIELD_U16(a1, 92) = 0;
  FIELD_U16(a1, 90) = 0;
  FIELD_U16(a1, 114) = 0;
  FIELD_U32(a1, 116) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 148) = a1 + 156;
  FIELD_U32(a1, 144) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 152) = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 144);
  **(_BYTE **)(a1 + 148) = 0;
  FIELD_U32(a1, 144) = &off_60BD94BC;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 132) = 0;
  (*(void (__fastcall **)(int *, void *))(dword_60CD0A2C + 16))(&dword_60CD0A2C, &unk_60CD0A30);
  return a1;
}
