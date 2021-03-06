#pragma once

class TBuffer;
class IInputStream;

/*
 * fast entropy pool, based on good prng, can lock for some time
 * initialized with some bits from system entropy pool
 * think as /dev/urandom replacement
 */
IInputStream& EntropyPool();

/*
 * fast(non-blocking) entropy pool, useful for seeding PRNGs
 */
IInputStream& Seed();

/*
 * initial host entropy data
 */
const TBuffer& HostEntropy();
