/* sub_6034EEAC
 * address: 0x6034EEAC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034EEAC(int a1)
{
  int *v2; // r1

  FIELD_U32(a1, 144) = 1059749626;
  FIELD_U32(a1, 148) = 1059749626;
  FIELD_U32(a1, 152) = 1059749626;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFFDC4, &stru_60AFFDD0, &stru_60AFFDDC);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1098907648;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 500) = 1111490560;
  FIELD_U32(a1, 504) = 1111490560;
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1111490560;
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116)
                       + (float)((float)(int)(((10
                                              * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32)
                                            - 5)
                               * 16.0);
  FIELD_U32(a1, 6392) = 2;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1094713344;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  FIELD_U32(a1, 6732) = 0;
  FIELD_U32(a1, 6736) = 1099956224;
  FIELD_U32(a1, 6740) = 1099956224;
  FIELD_U32(a1, 6744) = 1099956224;
  FIELD_U32(a1, 6244) = 1;
  if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
    v2 = &dword_60C94E30;
  else
    v2 = &dword_60C945B4;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v2);
}
