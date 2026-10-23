/* sub_603FD238
 * address: 0x603FD238   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD238(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r1

  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 428) = 0;
  v2 = LevelInfo_instance;
  v3 = FIELD_U32(a1, 492);
  if ( (unsigned int)(v3 - 2) < 2 )
    goto LABEL_2;
  if ( v3 == 4 )
  {
    sub_603F692C(a1);
    FIELD_U8(a1, 462) = -1;
    FIELD_U8(a1, 461) = -1;
    FIELD_U8(a1, 463) = -1;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a1 == -1
    || sub_603F6960(
         (unsigned __int8 *)a1,
         FIELD_U8(LevelInfo_instance, 28),
         FIELD_U8(LevelInfo_instance, 29)) == -1 )
  {
LABEL_2:
    sub_603F692C(a1);
    FIELD_U8(a1, 462) = -1;
    FIELD_U8(a1, 461) = -1;
    FIELD_U8(a1, 463) = -1;
    sub_6040D3CC(v2, 0);
    sub_6040D3E0(v2, 255);
    v4 = v2;
    v5 = 1;
  }
  else
  {
    FIELD_U8(a1, 461) = FIELD_U8(a1, 16);
    FIELD_U8(a1, 462) = FIELD_U8(a1, 17);
    FIELD_U8(a1, 463) = FIELD_U8(a1, 18);
    sub_6040D3CC(v2, FIELD_U8(a1, 6));
    sub_6040D3E0(v2, FIELD_U8(a1, 7));
    v4 = v2;
    v5 = 2;
  }
  sub_6040D3F4(v4, v5);
LABEL_6:
  FIELD_U32(a1, 500) = 15;
  FIELD_U32(a1, 468) = 15;
  FIELD_U32(a1, 472) = 15;
  FIELD_U32(a1, 476) = 15;
  FIELD_U32(a1, 480) = 15;
  FIELD_U32(a1, 484) = 15;
  FIELD_U8(a1, 576) = 0;
  return 0;
}
