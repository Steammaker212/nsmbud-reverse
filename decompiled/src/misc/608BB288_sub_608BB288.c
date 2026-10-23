/* sub_608BB288
 * address: 0x608BB288   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB288(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int i; // r7

  if ( FIELD_U8(a1, 5) )
  {
    v4 = FIELD_S16(a1, 216);
    if ( v4 < FIELD_S16(a1, 214) )
      FIELD_U16(a1, 216) = v4 + 1;
    v5 = FIELD_S16(a1, 222);
    if ( v5 < FIELD_S16(a1, 220) )
      FIELD_U16(a1, 222) = v5 + 1;
    v6 = FIELD_S16(a1, 228);
    if ( v6 < FIELD_S16(a1, 226) )
      FIELD_U16(a1, 228) = v6 + 1;
    v7 = FIELD_S16(a1, 234);
    if ( v7 < FIELD_S16(a1, 232) )
      FIELD_U16(a1, 234) = v7 + 1;
    v8 = FIELD_S16(a1, 240);
    if ( v8 < FIELD_S16(a1, 238) )
      FIELD_U16(a1, 240) = v8 + 1;
    if ( FIELD_U8(a1, 200) )
    {
      if ( FIELD_U32(a1, 380) )
        return 1;
      FIELD_U8(a1, 200) = 0;
    }
    v9 = FIELD_U32(a1, 196);
    if ( v9 < 1 || (--v9, (FIELD_U32(a1, 196) = v9) == 0) )
    {
      if ( FIELD_U32(a1, 104) && !v9 )
      {
        for ( i = 0; i <= 9999 && !FIELD_U8(a1, 200); ++i )
        {
          if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 8))(a1, a2) == 1 )
            return -1;
          if ( FIELD_U32(a1, 196) )
            return 1;
        }
      }
    }
    return 1;
  }
  return 0;
}
