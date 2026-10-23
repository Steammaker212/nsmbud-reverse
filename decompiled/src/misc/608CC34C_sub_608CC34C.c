/* sub_608CC34C
 * address: 0x608CC34C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC34C(int a1, int a2, int a3)
{
  int *v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r0
  int *v10; // r0
  int result; // r0

  if ( FIELD_U8(a1, 36) )
  {
    FIELD_U8(a1, 39) = 1;
    if ( FIELD_U8(a1, 278) )
    {
      v6 = sub_608C3C60();
      sub_608C411C((int)v6, a1 + 176);
      FIELD_U8(a1, 278) = 0;
    }
    if ( FIELD_U8(a1, 37) )
      FIELD_U8(a1, 37) = 0;
  }
  FIELD_U32(a1, 204) = *(_DWORD *)a2;
  FIELD_U32(a1, 208) = FIELD_U32(a2, 4);
  FIELD_U32(a1, 212) = FIELD_U32(a2, 8);
  v7 = FIELD_U32(a2, 16);
  if ( !v7 )
    v7 = FIELD_U32(a2, 12) / 5u;
  FIELD_U32(a1, 216) = v7;
  v8 = FIELD_U32(a2, 20);
  FIELD_U32(a1, 224) = v8;
  FIELD_U32(a1, 220) = FIELD_U32(a2, 24);
  FIELD_U8(a1, 228) = FIELD_U8(a2, 28) & (v8 << 30 >> 31);
  FIELD_U32(a1, 272) = FIELD_U32(a2, 32);
  FIELD_U32(a1, 196) = *(_DWORD *)a3;
  FIELD_U32(a1, 200) = FIELD_U32(a3, 4);
  FIELD_U8(a1, 191) = FIELD_U8(a3, 8);
  FIELD_U8(a1, 276) = 3;
  FIELD_U8(a1, 36) = 1;
  v9 = sub_608D3D58();
  sub_608D3DBC(v9, a1 + 164);
  v10 = sub_608C3C60();
  result = sub_608C40FC((int)v10, a1 + 176);
  FIELD_U8(a1, 278) = 1;
  return result;
}
