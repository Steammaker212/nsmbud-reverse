/* PowBlock_vf9
 * address: 0x605CC3DC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf9(CollisionActor *a1, int a2)
{
  sead_ListNode *next; // r1

  if ( a2 == 2 )
  {
    if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 88))(a1) == 1 )
    {
      next = a1[1]._._.field_20.next;
      if ( next != (sead_ListNode *)-1 )
      {
        ((void (__fastcall *)(CollisionActor *, sead_ListNode *, int *))loc_600010DC)(a1, next, &a1[1]._._.childCount);
        LOBYTE(a1[1]._._.field_30) = 1;
      }
    }
    else if ( LOBYTE(a1[1]._._.field_30) )
    {
      sub_60001688((int)a1, (int)a1[1]._._.field_20.next, -1);
      LOBYTE(a1[1]._._.field_30) = 0;
    }
  }
  return CollisionActor__afterExecute(a1, a2);
}
