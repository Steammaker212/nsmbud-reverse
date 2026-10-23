/* sub_6078A030
 * address: 0x6078A030   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A030(_DWORD *a1)
{
  int v2; // r2
  int result; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r1
  bool v7; // zf
  int v8; // r1
  bool v9; // zf
  int v10; // r1
  bool v11; // zf

  v2 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  result = 0;
  if ( FIELD_U8(v2, 20) && FIELD_S32(v2, 24) >= 1 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 1) != 0 )
      goto LABEL_10;
    v4 = a1[8];
    v5 = v4 == 0;
    if ( v4 )
      v5 = (FIELD_U8(v4, 1219) & 8) == 0;
    if ( v5 )
LABEL_10:
      result = 1;
  }
  if ( FIELD_U8(v2, 92) && FIELD_S32(v2, 96) >= 1 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 2) != 0 )
      goto LABEL_18;
    v6 = a1[9];
    v7 = v6 == 0;
    if ( v6 )
      v7 = (FIELD_U8(v6, 1219) & 8) == 0;
    if ( v7 )
LABEL_18:
      ++result;
  }
  if ( FIELD_U8(v2, 164) && FIELD_S32(v2, 168) >= 1 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 4) != 0 )
      goto LABEL_26;
    v8 = a1[10];
    v9 = v8 == 0;
    if ( v8 )
      v9 = (FIELD_U8(v8, 1219) & 8) == 0;
    if ( v9 )
LABEL_26:
      ++result;
  }
  if ( FIELD_U8(v2, 236) && FIELD_S32(v2, 240) >= 1 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 8) != 0 )
      goto LABEL_34;
    v10 = a1[11];
    v11 = v10 == 0;
    if ( v10 )
      v11 = (FIELD_U8(v10, 1219) & 8) == 0;
    if ( v11 )
LABEL_34:
      ++result;
  }
  return result;
}
