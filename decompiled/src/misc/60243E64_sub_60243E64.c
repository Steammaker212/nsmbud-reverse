/* sub_60243E64
 * address: 0x60243E64   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60243E64(int a1)
{
  unsigned __int8 *v1; // r4
  unsigned int v2; // t1
  int v3; // r1
  int v4; // r0
  int v5; // r6
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0

  if ( FIELD_U32(a1, 6316) == 2
    && !FIELD_U32(a1, 6320)
    && (FIELD_U8(a1, 6524) || FIELD_U8(a1, 6525) || !FIELD_U8(a1, 6536)) )
  {
    v2 = FIELD_U8(a1, 6314);
    v1 = (unsigned __int8 *)(a1 + 6314);
    v3 = (char)v2;
    v4 = 0;
    if ( v2 < 4 )
      v4 = v3;
    v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
    sub_603F01A0(dword_60C99D6C, v3, 20, 0);
    sub_603F01A0(dword_60C99D6C, (char)*v1, 26, 0);
    sub_603F01A0(dword_60C99D6C, (char)*v1, 25, 0);
    sub_603F01A0(dword_60C99D6C, (char)*v1, 30, 0);
    FIELD_U8(v5, 19) = 1;
    *(v1 - 6295) = 1;
    v6 = 0;
    FIELD_U8(dword_60C9CF0C, 1413) = 0;
    v7 = *v1;
    if ( v7 < 6 )
      v6 = (char)v7;
    v8 = dword_60C99DD4 + 72 * v6;
    v9 = 0;
    FIELD_U8(v8, 292) = 0;
    v10 = *v1;
    if ( v10 < 6 )
      v9 = (char)v10;
    *(_BYTE *)(dword_60C99DEC + 72 * v9 + 36) = 0;
  }
  return 1;
}
