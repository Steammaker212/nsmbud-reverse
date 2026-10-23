/* sub_608BE484
 * address: 0x608BE484   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BE484(int a1, const void *a2)
{
  int v4; // r0
  int result; // r0
  signed int v6; // r1
  int v7; // r2
  __int64 v8; // r2
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r2
  int v14; // r1
  int v15; // r1
  char v16; // r0

  if ( !FIELD_U8(a1, 185) )
  {
    v4 = sub_608C3C60(0);
    sub_608C40FC(v4, a1 + 164);
    FIELD_U8(a1, 185) = 1;
  }
  result = FIELD_U32(a1, 204);
  if ( result )
  {
    if ( FIELD_U8(a1, 176) )
    {
      if ( !FIELD_U8(a1, 179) )
      {
        v6 = *((_DWORD *)a2 + 3);
        if ( !v6 )
          v6 = *((_DWORD *)a2 + 2) / 5u;
        FIELD_U32(a1, 236) = v6;
        FIELD_U8(a1, 186) = v6 > 0;
        FIELD_U32(a1, 228) = *(_DWORD *)a2;
        FIELD_U32(a1, 232) = *((_DWORD *)a2 + 1);
        FIELD_U32(a1, 55168) = *((_DWORD *)a2 + 4);
        v7 = *((_DWORD *)a2 + 6);
        FIELD_U32(result, 772) = *((_DWORD *)a2 + 5);
        FIELD_U32(result, 776) = v7;
        *(_DWORD *)(FIELD_U32(a1, 204) + 20) = a1;
        *(_DWORD *)(FIELD_U32(a1, 204) + 28) = a1 + 252;
        *(_DWORD *)(FIELD_U32(a1, 204) + 32) = FIELD_U8(a1, 242);
        *(_DWORD *)(FIELD_U32(a1, 204) + 36) = FIELD_U32(a1, 244);
        FIELD_U8(a1, 36) = 1;
        result = FIELD_U32(a1, 204);
      }
      FIELD_U8(a1, 183) = 0;
      FIELD_U8(a1, 184) = 0;
      FIELD_U8(a1, 56248) = 1;
      v8 = FIELD_U64(a1, 428);
      FIELD_U8(result, 54) = FIELD_U8(a1, 248);
      FIELD_U64(result, 56) = v8;
      strncpy((char *)(FIELD_U32(a1, 204) + 64), (const char *)a2 + 28, 0x27Fu);
      v9 = *((_DWORD *)a2 + 170);
      v10 = FIELD_U32(a1, 204);
      FIELD_U32(v10, 40) = *((_DWORD *)a2 + 169);
      FIELD_U32(v10, 44) = v9;
      v11 = *((_DWORD *)a2 + 168);
      v12 = FIELD_U32(a1, 204);
      FIELD_U32(v12, 704) = *((_DWORD *)a2 + 167);
      FIELD_U32(v12, 708) = v11;
      v13 = FIELD_U32(a1, 204);
      v14 = *((_DWORD *)a2 + 172);
      FIELD_U32(v13, 712) = *((_DWORD *)a2 + 171);
      FIELD_U32(v13, 716) = v14;
      v15 = FIELD_U32(a1, 204);
      v16 = byte_60C5AF14;
      FIELD_U32(v15, 24) = 0;
      FIELD_U8(v15, 55) = v16;
      return sub_608D73F8(FIELD_U32(a1, 204));
    }
  }
  else
  {
    qmemcpy((void *)(a1 + 55556), a2, 0x2B4u);
    FIELD_U8(a1, 56248) = 0;
    return 56248;
  }
  return result;
}
