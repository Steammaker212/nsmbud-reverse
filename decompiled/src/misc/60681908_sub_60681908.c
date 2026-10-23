/* sub_60681908
 * address: 0x60681908   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60681908(int a1)
{
  FIELD_U32(a1, 7492) = 60 * (unsigned __int8)(FIELD_U32(a1, 20) >> 4);
  FIELD_U32(a1, 144) = 1090519040;
  FIELD_U32(a1, 148) = 1090519040;
  FIELD_U32(a1, 152) = 1090519040;
  FIELD_U32(a1, 7480) = 0;
  FIELD_U32(a1, 7484) = 0;
  FIELD_U32(a1, 7488) = 0;
  FIELD_U32(EnemyCounterMaybe_instance, 280) = ((unsigned __int8)FIELD_U32(EnemyCounterMaybe_instance, 280) + 1)
                                                & 7;
  FIELD_U8(a1, 7596) = 1;
  if ( FIELD_U8(a1, 7517) )
    return (*(int (**)(void))(*(_DWORD *)a1 + 192))();
  else
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB8138);
}
