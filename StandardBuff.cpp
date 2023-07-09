#include "StandardBuff.h"
#include "Player.h"

maxDamageBuff::maxDamageBuff(int r, int t) :BuffBase(r, t) { allocate(); }

void maxDamageBuff::allocate() { p.setMaxDamage(p.getMaxDamage() + getRate()); }

void maxDamageBuff::deAllocate() { p.setMaxDamage(p.getMaxDamage() - getRate()); }

maxDamageBuff::~maxDamageBuff() { deAllocate(); }

minDamageBuff::minDamageBuff(int r, int t) : BuffBase(r, t) { allocate(); }

void minDamageBuff::allocate() { p.setMinDamage(p.getMinDamage() + getRate()); }

void minDamageBuff::deAllocate() { p.setMinDamage(p.getMinDamage() - getRate()); }

minDamageBuff::~minDamageBuff() { deAllocate(); }

defenceBuff::defenceBuff(int r, int t) : BuffBase(r, t) { allocate(); }

void defenceBuff::allocate() { p.setDefence(p.getDefence() + getRate()); }

void defenceBuff::deAllocate() { p.setDefence(p.getDefence() - getRate()); }

defenceBuff::~defenceBuff() { deAllocate(); }

activityBuff::activityBuff(int r, int t) : BuffBase(r, t) { allocate(); }

void activityBuff::allocate() { p.setActivity(p.getActivity() + getRate()); }

void activityBuff::deAllocate() { p.setActivity(p.getActivity() - getRate()); }

activityBuff::~activityBuff() { deAllocate(); }

hitRateBuff::hitRateBuff(int r, int t) : BuffBase(r, t) { allocate(); }

void hitRateBuff::allocate() { p.setHitRate(p.getHitRate() + getRate()); }

void hitRateBuff::deAllocate() { p.setHitRate(p.getHitRate() - getRate()); }

hitRateBuff::~hitRateBuff() { deAllocate(); }

avoidanceBuff::avoidanceBuff(int r, int t) : BuffBase(r, t) { allocate(); }

void avoidanceBuff::allocate() { p.setAvoidance(p.getAvoidance() + getRate()); }

void avoidanceBuff::deAllocate() { p.setAvoidance(p.getAvoidance() - getRate()); }

avoidanceBuff::~avoidanceBuff() { deAllocate(); }