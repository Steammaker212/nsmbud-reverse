/* sub_60616B14
 * address: 0x60616B14   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60616B14(int a1)
{
  unsigned int v2; // r1
  char *v3; // r7
  MovementHandler *v4; // r5
  int MaskForMovementType; // r0
  int v6; // r0
  unsigned int v7; // r1
  _DWORD v9[11]; // [sp+14h] [bp-2Ch] BYREF

  FIELD_U32(a1, 7068) = 5;
  FIELD_U32(a1, 7076) = 1;
  FIELD_U8(a1, 535) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1149239296;
  FIELD_U32(a1, 504) = 1149239296;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  sub_606C77EC(a1);
  FIELD_U32(a1, 7184) = (unsigned __int8)FIELD_U32(a1, 20) >> 4;
  v2 = FIELD_U32(a1, 7056);
  if ( v2 )
  {
    v3 = (char *)(a1 + 7060);
    if ( FIELD_U32(a1, 7060) )
    {
      v4 = (MovementHandler *)(a1 + 6808);
      if ( v2 == 1 )
      {
        memset(v9, 0, 12);
        MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6808, 1u);
        MovementHandler_init3(
          (MovementHandler *)(a1 + 6808),
          (int *)(a1 + 108),
          MaskForMovementType,
          *v3,
          v9,
          0,
          0,
          0,
          1);
      }
      else
      {
        v6 = MovementHandler__getMaskForMovementType(a1 + 6808, v2);
        MovementHandler__link((MovementHandler *)(a1 + 6808), (Vec3 *)(a1 + 108), v6, *v3);
      }
      MovementHandler__execute(v4);
      if ( FIELD_U32(a1, 6856) == 1 && FIELD_U32(a1, 6876) != 1 )
      {
        FIELD_F32(a1, 108) = FIELD_U32(v4, 0x0).x;
        FIELD_U32(a1, 112) = FIELD_U32(a1, 6812);
        FIELD_U32(a1, 164) = FIELD_U32(a1, 6888);
      }
    }
  }
  if ( (FIELD_U64(EventMgr__instance, 16)
      & sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540))) == 0 )
    goto LABEL_14;
  v7 = FIELD_U32(a1, 7064);
  if ( v7 >= 8 )
    v7 = 0;
  if ( FIELD_U32(a1, 7184) == *(_DWORD *)(EnemyCounterMaybe_instance + 4 * v7 + 68) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC5C);
  else
LABEL_14:
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC38);
  return 1;
}
